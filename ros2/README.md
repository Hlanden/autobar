# ROS2 Stack for Autobar 

This stack is placed in between the web application, backend and the embedded stack.
Essentially the part that will connect all parts together.

## Getting Started

### Move Autobar Repository to a Catkin Workspace (if not done)
To build the ros2 stack as recommended by the ROS best practices, you need to move autobar repository into a catkin workspace. 
Create a catkin workspace with a `src/` folder for the autobar repository: 
```
// Move to desired work-folder 
mkdir -r <work-dir>/catkin_ws/src/
mv <path-to-autobar> <work-dir>/catkin_ws/src/
```

### Install ROS2 Humble Hawkins
Follow the instructions in the [official documentation](https://docs.ros.org/en/humble/Installation/Ubuntu-Install-Debians.html) and install it on your system.


## Project Structure and Packages
