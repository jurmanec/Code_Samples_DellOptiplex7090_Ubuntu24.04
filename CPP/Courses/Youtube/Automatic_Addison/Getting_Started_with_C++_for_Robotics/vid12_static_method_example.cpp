#include <iostream>
#include <cmath>

using namespace std;

class RobotUtils {

    public:
    static double calculate_distance(double x1, double y1, double x2, double y2) {
        double dx = x2 - x1;
        double dy = y2 - y1;
        return sqrt(pow(dx, 2)+ pow(dy, 2));
    }

};

int main(int argc, char const *argv[]) {

    double robot1_x = 0.0, robot1_y = 0.0;
    double robot2_x = 3.0, robot2_y = 4.0;

    double distance = RobotUtils::calculate_distance(robot1_x, robot1_y, robot2_x, robot2_y);
    cout << "Distance between robots: " << distance << endl;

    return 0;
}
