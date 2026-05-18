/**
 * @brief 
 * @version 0.1
 * @date 2026-05-17
 * 
 * @copyright Copyright (c) 2026
 * 
 * Tags: c++ robotics macros automatic_addison
 */

#include <iostream>

#define PI 3.141592654 // constant macro

#define AREA_CIRCLE(radius) (PI * (radius) * (radius)) // function-like macro

using namespace std;

int main() {

    double radius = 5.0;
    double area = AREA_CIRCLE(radius);

    cout << "The area of a circle with radius " << radius << " is " << area <<". "<< endl;

}
