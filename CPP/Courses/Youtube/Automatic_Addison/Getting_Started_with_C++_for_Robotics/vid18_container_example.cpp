/**
 * @brief 
 * @version 0.1
 * @date 2026-05-17
 * 
 * @copyright Copyright (c) 2026
 * 
 * Tags: robotics c++ automatic_addison deques lists forward_lists
 */

#include <iostream>
#include <deque>
#include <list>
#include <forward_list>

using namespace std;

int main() {

    /**
     * Dequeues.
     * Efficient insertion and deletion at both ends. 
     */
    deque<int> robot_positions = { 10, 20, 30 };
    robot_positions.push_front(5);
    robot_positions.push_back(40);
    cout << "Deque: ";
    for (const auto& pos: robot_positions ) {
        cout << pos <<" ";
    }
    cout <<endl;

    /**
     * Lists.
     * Constant time insertion and deletion anywhere in the container. 
     */
    list<string> robot_actions = { "move", "rotate", "scans" };
    robot_actions.push_back("grasp");
    robot_actions.push_back("initialize");
    cout << "List: ";
    for (const auto& action: robot_actions) {
        cout << action << " ";
    }
    cout << endl;

    /**
     * Forward lists.
     * A singly linked list with efficeint insertion and deletion at the front. 
     */
    forward_list<double> sensor_readings = { 1.5, 2.7, 3.2 };
    sensor_readings.push_front(0.8);
    cout << "Forward list: ";
    for (const auto sr: sensor_readings) {
        cout << sr << " ";
    }
    cout << endl;

}