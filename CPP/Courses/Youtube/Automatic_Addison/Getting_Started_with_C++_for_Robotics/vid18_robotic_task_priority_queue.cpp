/**
 * @brief 
 * @version 0.1
 * @date 2026-05-17
 * 
 * @copyright Copyright (c) 2026
 * 
 * Tags: robotics c++ automatic_addison priority_queues
 */

#include <iostream>
#include <queue>
#include <vector>
#include <functional>
#include <string>

using namespace std;

struct Task {
    int priority;
    string description;
    
    bool operator<(const Task& other) const {
        return priority < other.priority;
    }
};



int main() {

    priority_queue<Task> tasks;

    /**
     * From low to high priority: 1 to 3.
     */
    tasks.push({2, "Navigate to charging station"});
    tasks.push({1, "Send sensor data"});
    tasks.push({3, "Emergency stop"});

    while(!tasks.empty()) {
        Task t = tasks.top();
        tasks.pop();
        cout << "Executing task: " << t.description << endl;
    }

}