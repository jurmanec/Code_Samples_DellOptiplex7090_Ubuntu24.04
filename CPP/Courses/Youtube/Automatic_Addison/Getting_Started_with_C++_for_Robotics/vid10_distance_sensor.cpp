#include <iostream>

using namespace std;

class DistanceSensor {

    public:
    DistanceSensor(double range): range_(range) {}

    void displayRange() {
        cout << "Sensor maximum range: " << range_ << " meters"<< endl;
    }

    private:
    double range_;
};

int main() {
    DistanceSensor front_sensor(1.5);
    front_sensor.displayRange();
}