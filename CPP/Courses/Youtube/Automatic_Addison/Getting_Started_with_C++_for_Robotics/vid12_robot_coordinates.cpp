/**
 * Implicit pointer to all non static members
 */

#include <iostream>

using namespace std;

 class Robot {
    public:
    int x, y;
    Robot(int x, int y): x(x), y(y) {};
    void print_coords() {
        cout << "Coordinates: ("<<this->x<<", "<<this->y<<")"<<endl;
    }
 };

 int main(int argc, char const *argv[]) {
    Robot r(3, 7);
    r.print_coords();
 }
 