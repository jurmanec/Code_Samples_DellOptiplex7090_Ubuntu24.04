/**
 * @brief 
 * @version 0.1
 * @date 2026-05-17
 * 
 * @copyright Copyright (c) 2026
 * 
 * Tags: robotics c++ automatic_addison map multimap
 * 
 * Note: They are associative containers that store key value pairs.
 */

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {

    /**
     * Map. 
     * Does not allow duplicate keys.
     */
    map<string,int> sensor_readings;
    sensor_readings["temperature"] = 25;
    sensor_readings["humidity"] = 60;
    sensor_readings["pressure"] = 1013;

    for (const auto& r: sensor_readings) {
        cout << r.first << ": " << r.second << endl;
    }

    /**
     * Multimap.
     * Allows duplicate keys.
     * Add k-v pairs into the multimap using the .insert() function.
     */
    multimap<string, string> robot_commands;
    robot_commands.insert({"move", "forward"});
    robot_commands.insert({"move", "backward"});
    robot_commands.insert({"rotate", "left"});
    robot_commands.insert({"rotate", "right"});

    for (const auto& c: robot_commands) {
        cout << c.first << ": " << c.second << endl;
    }

}