/** * @brief 
 * @version 0.1
 * @date 2026-05-17
 * 
 * @copyright Copyright (c) 2026
 * 
 * Tags: robotics c++ automatic_addison standard_template_library double_ended_queues deques
 */

#include <iostream>
#include <deque>


using namespace std;

int main() {

    deque<float> sensor_data;
    
    sensor_data.push_back(2.5);
    sensor_data.push_back(5.1);
    sensor_data.push_back(4.7);

    cout << "Processing sensor reading: " << sensor_data.front() << endl;

    sensor_data.pop_front();

    sensor_data.push_back(5.5);
    sensor_data.push_back(6.8);

    cout << "Processing sensor reading: " << sensor_data.front() << endl;
    sensor_data.pop_front();

    /**
     * Front is on the left and back is on the right of the data structure. 
     * Thus push_back inserts on the right end.
     * And pop_front removes from the left end.
     */
    cout << "Remaining sensor data:";
    for (float val: sensor_data) {
        cout << " " << val;
    }
    cout << endl;
}