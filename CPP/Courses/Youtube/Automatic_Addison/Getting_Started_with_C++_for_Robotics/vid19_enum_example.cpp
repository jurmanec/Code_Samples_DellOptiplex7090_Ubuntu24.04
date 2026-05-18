/**
 * @brief 
 * @version 0.1
 * @date 2026-05-17
 * 
 * @copyright Copyright (c) 2026
 * 
 * Tags: robotics c++ automatic_addison enums
 * 
 * Enums are named constants that we can use.
 */

#include <iostream>

using namespace std;

/**
 */
enum class RobotState {
    IDLE,
    MOVING,
    GRASPING,
    ERROR
};

void printRobotState(RobotState rs) {
    switch(rs) {
        case RobotState::IDLE: 
            cout << "Robot is idle." << endl;
            break;
        case RobotState::MOVING: 
            cout << "Robot is moving." << endl;
            break;
        case RobotState::GRASPING:
            cout << "Robot is grasping an object." << endl;
            break;
        case RobotState::ERROR: 
            cout << "Robot encountered an error." << endl;
            break;
    }
}

int main() {
    RobotState currentState = RobotState::IDLE;
    printRobotState(currentState);

    currentState = RobotState::MOVING;
    printRobotState(currentState);
}