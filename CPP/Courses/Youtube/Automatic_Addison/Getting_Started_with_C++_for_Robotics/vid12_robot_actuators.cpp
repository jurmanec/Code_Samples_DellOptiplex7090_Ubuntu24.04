/**
 * Tags: polymorphism
 */
#include <iostream>

using namespace std;


/**
 * 
 * declaring a 'pure virtual function' makes the class abstract.
 * Thus Actuator is one.
 * Abstract classes can still have regular functions and variables.
 * Abstract classes cannot be instantiated. Their children, if not abstract, can be.
 */
class Actuator {
    public:
    virtual void activate() = 0;
    void info() {
        cout << "This is an actuator." << endl;
    }

};

class Motor: public Actuator {
    public:
    void activate() override {
        cout << "Motor is running." << endl;
    }
};

class Servo: public Actuator {
    public:
    void activate() override {
        cout << "Servo adjusting position." << endl;
    }
};


void test_actuator(Actuator& actuator) {
    actuator.activate();
}

int main(int argc, char const *argv[]) {

    Motor m;
    Servo s;

    test_actuator(m);
    test_actuator(s);

    m.info();
    m.info();

}
