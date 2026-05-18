/**
 * @brief 
 * @version 0.1
 * @date 2026-05-17
 * 
 * @copyright Copyright (c) 2026
 * 
 * Tags: robotics c++ automatic_addison multithreading time_functions
 * 
 * Threads allow many tasks to run simultaneously. This allows parallel processing in robotics applications.
 * 
 * In this example, all 3 threads run concurrently. 
 * Their durations are 2, 3, and 4 seconds. 
 */

#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

void sensorTask(const string& sensor_name, int duration) {
    cout << "Sensor task started: " << sensor_name << endl;
    this_thread::sleep_for(chrono::seconds(duration));
    cout << "Sensor task completed: " << sensor_name << endl;
}

void controlTask(const string& controller_name, int duration) {
    cout << "Control task started: " << controller_name << endl;
    this_thread::sleep_for(chrono::seconds(duration));
    cout << "Control task completed: " << controller_name << endl;
}

int main() {

    cout << "Main thread started" << endl;
    
    // start 3 children threads
    thread sensor_thread1(sensorTask, "TemperatureSensor", 2);
    thread sensor_thread2(sensorTask, "HumiditySensor", 3);
    thread control_thread(controlTask, "MotionController", 4);

    cout << "sensor_thread1 is joinable? " << sensor_thread1.joinable() << endl;

    /**
     * Calling .join() causes main to pause its execution until the thread completes its execution.
     */
    sensor_thread1.join();
    sensor_thread2.join();
    control_thread.join();

    cout << "sensor_thread1 is joinable? " << sensor_thread1.joinable() << endl;

    cout << "Main thread completed" << endl;
}