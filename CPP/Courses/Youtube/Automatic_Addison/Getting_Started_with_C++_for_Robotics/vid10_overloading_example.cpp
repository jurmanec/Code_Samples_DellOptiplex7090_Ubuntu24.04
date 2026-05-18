#include  <iostream>

using namespace std;

void move_robot(int distance) {
    cout << "Moving robot forward by "<< distance << " units"<< endl;
}

void move_robot(int x, int y) {
    cout << "Moving robot to position (" <<x<<", "<<y<<")"<<endl;
}

int main() {
    move_robot(10); // distance of 10 units
    move_robot(5, 7); // to point (5,7)       
}