/**
 * @brief 
 * @version 0.1
 * @date 2026-05-17
 * 
 * @copyright Copyright (c) 2026
 * 
 * Tags: lambda_expressions file_input_output c++ robotics
 * 
 * Lambdas.
 * Allow us to define anonymous functions inline.
 */
#include <iostream>
#include <vector>
#include <algorithm> // include for std::sort

using namespace std;

int main(int argc, char const *argv[]) {

    vector<int> sensor_readings = { 90, 85, 60, 75, 100 }; // could be temp, etc.

    cout << "Original readings: ";
    for (auto reading: sensor_readings) {
        cout << reading <<" ";
    }
    cout << endl;

    /**
     * Parts of a Lamba expression.
     * 
     * [capture_clause] (parameters) -> return_type { body } 
     * 
     * 
     */
    sort(sensor_readings.begin(), sensor_readings.end(), [](int a, int b) { return a > b; });

    cout << "Sorted readings (desc): ";
    for (auto reading: sensor_readings) {
        cout << reading <<" ";
    }
    cout << endl;

}



