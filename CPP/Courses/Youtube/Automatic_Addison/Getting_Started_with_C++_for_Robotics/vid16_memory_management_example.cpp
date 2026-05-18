/**
 * @brief 
 * @version 0.1
 * @date 2026-05-17
 * 
 * @copyright Copyright (c) 2026
 * 
 * Tags: robotics c++ automatic_addison memory_management malloc free
 */

 #include <iostream>
 #include <cstdlib>

 using namespace std;

 int main() {

    int* ptr = (int*)malloc(sizeof(int));
    if (ptr == nullptr) {
        cout << "Memory allocation failed" << endl;
        return -1;
    }

    *ptr = 5;
    cout << "Value at pointer: "<< *ptr <<endl;

    free(ptr);
    ptr = nullptr;
    return 0;
 }