/**
 * @brief 
 * @version 0.1
 * @date 2026-05-17
 * 
 * @copyright Copyright (c) 2026
 * 
 * Tags: robotics c++ automatic_addison iterators
 * 
 * 
 */

#include <iostream>
/**
 * vectors are dynamic. They can grow and shrink in size (like Java array list?)
 */
#include <vector> 

using namespace std;

int main() {

    vector<int> sensor_data = { 10, 20, 30, 40, 50};

    /**
     * .begin() gets iterator pointing to first element.
     * 
     * .end() gets iterator pointing to the theoretical element just after the last element.
     * aka the past-the-end iterator.
     */
    for (auto it = sensor_data.begin(); it != sensor_data.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // //for comparison 
    // for (auto val: sensor_data) {
    //     cout << val << " ";
    // }
    // cout << endl;

    for (auto it = sensor_data.begin(); it != sensor_data.end(); ++it) {
        *it *= 2;
    }

    /**
     * Range based for loop uses iterators under the hood to traverse the collection.
     */
    for (const auto& value: sensor_data) {
        cout << value << " ";
    }
    cout << endl;

    //// for comparison
    // for (auto& val: sensor_data) {
    //     val = 3;
    // }

    // for (const auto& value: sensor_data) {
    //     cout << value << " ";
    // }
    // cout << endl;

    cout << endl;

}