#!/usr/bin/env python
import rospy
from geometry_msgs.msg import Twist
import time
from appJar import gui

#function that makes all motion by publishing according to the arguments
def move(disVector,angVector):
	# Starts a new node
	rospy.init_node('robot_cleaner', anonymous=True)
	pub = rospy.Publisher('/turtle1/cmd_vel', Twist, queue_size=1000)
	vel_msg = Twist() #object creation
	vel_msg.linear.x = disVector
	vel_msg.angular.z = angVector    

	pub.publish(vel_msg)


#function identifying which button is pressed
def button_handler(button):
	if button == "Forward":
		print('Forward by 2 units')
		move(2,0)
	elif button == "Backward":
		print('Backward by 2 units')
		move(-2,0)
	elif button == "Left":
		print('rotate 2rads')
		move(0,2)
	elif button == "Right":
		print('rotate -2rads')
		move(0,-2)
	elif button == "Stop":
		print('Stop')
		move(0,0)

if __name__ == '__main__':
    try:
        app = gui()
        # add & configure widgets - widgets get a name, to help referencing them later
        app.addLabel("title", "Turtle GUI_controller")
        app.setLabelBg("title", "cyan")
        app.setBg("blue")
	app.setPadding(10,10)
        # link the buttons to the function called press
        app.addButtons(["Forward"], button_handler)
        app.addButtons(["Left","Stop", "Right"], button_handler)
        app.addButtons(["Backward"], button_handler)
	# start the GUI
	app.go()
    except rospy.ROSInterruptException: pass
