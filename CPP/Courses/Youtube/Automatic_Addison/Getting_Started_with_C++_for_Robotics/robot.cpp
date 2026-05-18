/**
 * include path. 
 * Fist the current directory.
 * Next, /usr/include (and other paths?).
 * <> for compiler specified include paths. 
 * "" for the current directory. 
 */
#include "robot.hpp"
#include <iostream>

using namespace std;

void Robot::greet() {
    cout << "Hello, I am a robot." << endl;   
}

int main() {
    Robot my_robot; // nothing to initialize
    my_robot.greet();
}