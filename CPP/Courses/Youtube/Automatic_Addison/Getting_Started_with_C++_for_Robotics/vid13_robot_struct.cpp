/**
 * Tags: structs robotics c++
 */
#include <iostream>
#include <string>

using namespace std;

struct RobotSpec {
    string model;
    int max_speed;
    double weight;
};

void print_robot_spec(const RobotSpec& spec) {
    cout << "Model: " << spec.model << endl;
    cout << "Max speed: " <<spec.max_speed << " m/s" << endl;
    cout << "Weight: " << spec.weight << endl;
}

int main(int argc, char const *argv[]) {
    RobotSpec rs = {"MobileBot", 5, 10.5};
    print_robot_spec(rs);
}
