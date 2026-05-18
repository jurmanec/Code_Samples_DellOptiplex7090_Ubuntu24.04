#include <iostream>

using namespace std;

class Robot {

    public:
    Robot(int battery, int speed): battery_level_{battery}, max_speed_{speed} {}

    void printStatus() {
        cout << "Battery level: "<< battery_level_<< endl;
        cout << "Max speed: "<< max_speed_ << endl;
    }

    /**
     * protected. Accessible in this class and any classes derived from it. Same as Java.
     */
    protected:
    int max_speed_;

    /**
     * private. batter level is encapsulated.
     */
    private:
    int battery_level_;

};

int main() {
    Robot r(75, 10);
    r.printStatus();
}