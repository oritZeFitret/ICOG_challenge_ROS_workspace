#!/usr/bin/env python
import rospy
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import sys
#sys.path.remove('/opt/ros/jade/lib/python2.7/dist-packages')
import cv2

def handler(data):
    br= CvBridge()
    rospy.loginfo('receiving an image')
	#br.cv2_to_imgmsg(cv2.cvtColor(img, CV2.COLOR_RGB2BGR)
    cv2.imshow("Grayscaled", cv2.cvtColor(cv2.cvtColor(br.imgmsg_to_cv2(data),cv2.COLOR_RGB2BGR),cv2.COLOR_RGB2GRAY))
    cv2.waitKey(1)

def listener():
    rospy.init_node('listener', anonymous=True)
    rospy.Subscriber('/camera/image_raw', Image, handler)
    rospy.spin()
    cv2.destroyAllWindows()

if __name__ == '__main__':
    try:
        listener()
    except rospy.ROSInterruptException:
        pass
