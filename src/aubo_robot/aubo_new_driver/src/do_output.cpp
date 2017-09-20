#include "aubo_new_driver/do_output.h"

void print_debug(std::string inp) {
#ifdef ROS_BUILD
	ROS_DEBUG("%s", inp.c_str());
#else
	printf("DEBUG: %s\n", inp.c_str());
#endif
}
void print_info(std::string inp) {
#ifdef ROS_BUILD
	ROS_INFO("%s", inp.c_str());
#else
	printf("INFO: %s\n", inp.c_str());
#endif
}
void print_warning(std::string inp) {
#ifdef ROS_BUILD
	ROS_WARN("%s", inp.c_str());
#else
	printf("WARNING: %s\n", inp.c_str());
#endif
}
void print_error(std::string inp) {
#ifdef ROS_BUILD
	ROS_ERROR("%s", inp.c_str());
#else
	printf("ERROR: %s\n", inp.c_str());
#endif
}
void print_fatal(std::string inp) {
#ifdef ROS_BUILD
	ROS_FATAL("%s", inp.c_str());
	ros::shutdown();
#else
	printf("FATAL: %s\n", inp.c_str());
	exit(1);
#endif
}
