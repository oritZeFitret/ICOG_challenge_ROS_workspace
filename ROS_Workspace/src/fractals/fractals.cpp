#include <ros/ros.h>
#include <geometry_msgs/Twist.h>

int main(int argc, char **argv){

	//initializing everything
	ros::init(argc,argv,"koch_snowflake");

	//creating a node handle to register with the ros master
	ros::NodeHandle nh;
	
	//creating a publisher to publish to the turtle1/cmd_vel topic
	ros::Publisher pub = nh.advertise<geometry_msgs::Twist>("turtle1/cmd_vel",1000);
	
	//some necessary variables
	double dx = .2;
	double theta_low = 3.14159236 / 3;
	double theta_high = -3.14159236 / 1.5;
	
	//setting the publish rate	
	ros::Rate rate(.5);

	//declaring the type of messages to be published

	//go message
	geometry_msgs::Twist msgGo;
	msgGo.linear.x = dx;
	//go_back message
	geometry_msgs::Twist msgGo_back;
	msgGo_back.linear.x = -2;
	//60 message
	geometry_msgs::Twist msg60;
	msg60.angular.z = theta_low;
	//-120 message
	geometry_msgs::Twist msg120;
	msg120.angular.z = theta_high;
	//0 message
	geometry_msgs::Twist msg0;
	msg0.angular.z = 0;
	

	while(ros :: ok()){

		//setting the msg attributes for a single loop
		
		//0
		pub.publish(msg0);
		rate.sleep();
		
		//go
		pub.publish(msgGo);
		rate.sleep();

		//60
		pub.publish(msg60);
		rate.sleep();

		//go
		pub.publish(msgGo);
		rate.sleep();

		//60
		pub.publish(msg60);
		rate.sleep();

		//go
		pub.publish(msgGo);
		rate.sleep();

		//-120
		pub.publish(msg120);
		rate.sleep();

		//go
		pub.publish(msgGo);
		rate.sleep();

		//60
		pub.publish(msg60);
		rate.sleep();

		//go
		pub.publish(msgGo);
		rate.sleep();

		//60
		pub.publish(msg60);
		rate.sleep();

		//go
		pub.publish(msgGo);
		rate.sleep();

		//60
		pub.publish(msg60);
		rate.sleep();

		//go
		pub.publish(msgGo);
		rate.sleep();

		//-120
		pub.publish(msg120);
		rate.sleep();

		//go
		pub.publish(msgGo);
		rate.sleep();

		//60
		pub.publish(msg60);
		rate.sleep();

		//go
		pub.publish(msgGo);
		rate.sleep();

		//-120
		pub.publish(msg120);
		rate.sleep();

		//go
		pub.publish(msgGo);
		rate.sleep();

		//60
		pub.publish(msg60);
		rate.sleep();

		//go
		pub.publish(msgGo);
		rate.sleep();

		//-120
		pub.publish(msg120);
		rate.sleep();

		//go
		pub.publish(msgGo);
		rate.sleep();

		//60
		pub.publish(msg60);
		rate.sleep();

		//go
		pub.publish(msgGo);
		rate.sleep();

		//60
		pub.publish(msg60);
		rate.sleep();

		//go
		pub.publish(msgGo);
		rate.sleep();

		//60
		pub.publish(msg60);
		rate.sleep();

		//go
		pub.publish(msgGo);
		rate.sleep();

		//-120
		pub.publish(msg120);
		rate.sleep();

		//go
		pub.publish(msgGo);
		rate.sleep();

		//60
		pub.publish(msg60);
		rate.sleep();

		//go
		pub.publish(msgGo);
		rate.sleep();

		//-120
		pub.publish(msg120);
		rate.sleep();

		//go
		pub.publish(msgGo);
		rate.sleep();

		//60
		pub.publish(msg60);
		rate.sleep();

		//go
		pub.publish(msgGo);
		rate.sleep();

		//-120
		pub.publish(msg120);
		rate.sleep();

		//go
		pub.publish(msgGo);
		rate.sleep();
		
		//60
		pub.publish(msg60);
		rate.sleep();

		//go
		pub.publish(msgGo);
		rate.sleep();

		//60
		pub.publish(msg60);
		rate.sleep();

		//go
		pub.publish(msgGo);
		rate.sleep();

		//60
		pub.publish(msg60);
		rate.sleep();

		//go
		pub.publish(msgGo);
		rate.sleep();

		//-120
		pub.publish(msg120);
		rate.sleep();

		//go
		pub.publish(msgGo);
		rate.sleep();
		
		//60
		pub.publish(msg60);
		rate.sleep();

		//go
		pub.publish(msgGo);
		rate.sleep();

		//-120
		pub.publish(msg120);
		rate.sleep();

		//go
		pub.publish(msgGo);
		rate.sleep();
		
		//60
		pub.publish(msg60);
		rate.sleep();

		//go
		pub.publish(msgGo);
		rate.sleep();

		//-120
		pub.publish(msg120);
		rate.sleep();

		//go
		pub.publish(msgGo);
		rate.sleep();
		
		//60
		pub.publish(msg60);
		rate.sleep();

		//go
		pub.publish(msgGo);
		rate.sleep();

		//60
		pub.publish(msg60);
		rate.sleep();

		//go
		pub.publish(msgGo);
		rate.sleep();

		//60
		pub.publish(msg60);
		rate.sleep();

		//go
		pub.publish(msgGo);
		rate.sleep();

		//-120
		pub.publish(msg120);
		rate.sleep();

		//go
		pub.publish(msgGo);
		rate.sleep();
		
		//60
		pub.publish(msg60);
		rate.sleep();


	}
}
