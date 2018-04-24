#!/usr/bin/env python
import rospy
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import sys
#sys.path.remove('/opt/ros/jade/lib/python2.7/dist-packages')
import cv2

def talker():
    pub = rospy.Publisher('imager', Image, queue_size=1000)
    rospy.init_node('talker', anonymous=True)
    rate = rospy.Rate(2) # 2hz
    capture = cv2.VideoCapture(0)
    br= CvBridge()
    while not rospy.is_shutdown():
        [status,img] = capture.retrieve()
        if status == True:
            rospy.loginfo('publishing an image')
            pub.publish(br.cv2_to_imgmsg(img))
            rate.sleep()

if __name__ == '__main__':
    try:
		print("Grayscaler started\n\n")
        talker()
    except rospy.ROSInterruptException:
        pass
