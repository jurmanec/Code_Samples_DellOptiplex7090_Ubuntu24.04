/**
 * @brief 
 * @version 0.1
 * @date 2026-05-17
 * 
 * @copyright Copyright (c) 2026
 * 
 * Tags: robotics c++ automatic_addison stacks queues
 */

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {

    stack<int> my_stack;
    my_stack.push(10);
    my_stack.push(20);
    my_stack.push(30);
    cout << "Top element of the stack: " << my_stack.top() << endl; // 30
    my_stack.pop();
    cout << "Update top element " << my_stack.top() << endl; // 20

    queue<string> my_queue;
    my_queue.push("Sensor data");
    my_queue.push("Robot command");
    my_queue.push("Navigation goal");
    cout << "Front element of the queue: " << my_queue.front() << endl; // sensor data
    my_queue.pop(); // dequeues
    cout << "Updated front element: " << my_queue.front() << endl; // robot command
}