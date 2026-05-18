#include <iostream>

using namespace std;

class RobotArm {

    public:
    void set_position(int x, int y, int z) {
        x_ = x; 
        y_ = y; 
        z_ = z;
    }
    /**
     * `const` after the parens in a class member function means that the function does not 
     * mutate object's state.
     */
    int get_x() const {
        return x_;
    }
    int get_y() const {
        return y_;
    }
    int get_z() const {
        return z_;
    }

    private:
    int x_;
    int y_;
    int z_;
};

int main() {
    RobotArm arm;
    arm.set_position(10, 20, 30);
    cout << "Robot arm position: ("
        << arm.get_x()<<", "
        << arm.get_y()<<", "
        << arm.get_z()<<")"<<endl;
}