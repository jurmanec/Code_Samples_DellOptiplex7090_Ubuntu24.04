/**
 * @brief 
 * @version 0.1
 * @date 2026-05-17
 * 
 * @copyright Copyright (c) 2026
 * 
 * Tags: robotics c++ automatic_addison sets multisets associative_containers
 * 
 * These are associative containers that store elements in sorted order by default.
 * Typically implemented using balanced binary search trees (like Red-Black trees).
 */

#include <iostream>
#include <set>

using namespace std;

int main() {

    set<int> unique_landmarks = { 10, 20, 30, 20, 40, 30 };
    cout << "Unique landmarks: ";
    for (const auto& lm: unique_landmarks) {
        cout << lm << " ";
    }
    cout << endl;

    multiset<string> repeated_commands = { "move", "rotate", "scan", "move", "grasp" };
    cout << "Repated commands: ";
    for (const auto& cmd: repeated_commands)  {
        cout << cmd << " ";
    }
    cout << endl;

}