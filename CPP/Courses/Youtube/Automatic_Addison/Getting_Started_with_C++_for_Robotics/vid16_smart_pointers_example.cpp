/**
 * @brief 
 * @version 0.1
 * @date 2026-05-17
 * 
 * @copyright Copyright (c) 2026
 * 
 * Tags: robotics c++ automatic_addison smart_pointers shared_pointer unique_pointer weak_pointer
 */

 #include <iostream>
 #include <string>
 #include <memory>

 using namespace std;

 class Sensor {

    public:
    Sensor(const string& name, double value): name{name}, value{value} {}
    
    void printInfo() const {
        cout << "Sensor: " << name << ", Value: " << value << endl;
    }

    private:
    string name;
    double value;

 };

 int main() {
    /**
     * s1 pointer has exclusive ownership to the memory loccation. 
     * s1 is automatically deleted when it goes out of scope.
     */
    unique_ptr<Sensor> s1 = make_unique<Sensor>("TempSensor", 25.5);
    s1->printInfo();
    
    /**
     * shared_ptr allows multiple pointers to the memory location (shared ownership of the object).
     * The object is deleted when all shared_ptr instances go out of scope.
     */
    shared_ptr<Sensor> s2 = make_shared<Sensor>("HumiditySensor", 60.0);
    s2->printInfo();

    /** 
     * Weak pointer ot the shared pointer.
     * It does not participate in ownership, but can be used to check if the object is still valid.
     * .lock() is used to obtain a shared_ptr from the weak_ptr an get access to the obejct. 
    */
    weak_ptr<Sensor>  weak_sensor = s2;
    if (auto shared_sensor = weak_sensor.lock()) { // returns a valid pointer or nullptr
        shared_sensor->printInfo();
    } else {
        cout << "HumiditySensor has been destroyed and cannot be locked" << endl;
    }
 }