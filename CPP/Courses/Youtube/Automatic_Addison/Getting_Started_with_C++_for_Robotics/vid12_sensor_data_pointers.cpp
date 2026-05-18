#include <iostream>

using namespace std;

int main() {
    
    int sensor_value = 100;
    int* ptr = &sensor_value;

    cout << "Sensor value: "  <<*ptr << endl;
    cout << "Memory address: "<< ptr << endl;

    *ptr = 200;
    cout << "Updated sensor value: "<< sensor_value << endl;

}