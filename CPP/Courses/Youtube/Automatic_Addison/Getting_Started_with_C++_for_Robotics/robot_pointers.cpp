#include <iostream>

using namespace std;


int main() {

    int robot_id = 42;
    int* ptr = &robot_id; // ampersand is address of operator

    cout << "Robot ID: "<<robot_id << endl;
    cout << "Pointer value: "<< ptr<< endl;
    cout << "Dereferenced pointer: "<< *ptr << endl;

    *ptr = 99;
    cout << "Updated Robot ID: " << robot_id << endl;

}