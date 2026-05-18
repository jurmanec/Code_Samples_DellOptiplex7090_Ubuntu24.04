#include <iostream>

using namespace std;

class RobotController {

    public:
    RobotController() {
        cout << "Creating robot controller..."<<endl;
    }
    ~RobotController() {
        /**
         * Clean up and resource shutdown in the destructor.
         */
        cout << "Robot contoller shutting down" << endl;
    }

    void control_robot() {
        cout << "Controlling robot..." << endl;
    }

    private:
};

int main() {
    RobotController rc;
    rc.control_robot();
}