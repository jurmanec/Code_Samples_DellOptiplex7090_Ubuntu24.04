/**
 * @brief 
 * @version 0.1
 * @date 2026-05-17
 * 
 * @copyright Copyright (c) 2026
 * 
 * Tags: robotics c++ automatic_addison time_functions chrono_library durations
 * 
 * Time functions used for measuing elapsed time, creating delays and syncrhonizing actions.
 */

#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main() {

    /**
     * start timer
     */
    auto start_time = chrono::steady_clock::now();
    
    this_thread::sleep_for(chrono::seconds(2));

    auto end_time = chrono::steady_clock::now();

    chrono::duration<double> elapsed_seconds = end_time - start_time;
    
    cout << "Elapsed time: " << elapsed_seconds.count() << " seconds." << endl;

}