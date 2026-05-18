#include <iostream>

using namespace std;

class Robot {
    public:
    virtual void move() {
        cout << "Robot is moving" << endl;
    }
    ~Robot() {
        cout<<"Destroying robot "<<this<<"..."<<endl;
    }
};

class WheeledRobot: public Robot {
    public:
    void move() override {
        cout << "Wheeled robot is rolling" << endl;
    }
};

class LeggedRobot: public Robot {
    public:
    void move() override {
        cout << "Leggeded robot is walking" << endl;
    }
};

int main(int argc, char const *argv[]) {

    /**
     * All three are robot instances.
     * Pointers to the base class.
     */
    Robot* r = new Robot();
    Robot* r1 = new WheeledRobot();
    Robot* r2 = new LeggedRobot();
    
    r->move(); // virtual method can be invoked in base class
    r1->move();
    r2->move();

    delete r;
    delete r1;
    delete r2;
}
