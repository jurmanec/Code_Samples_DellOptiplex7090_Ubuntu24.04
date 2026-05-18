#include <iostream>
#include <cmath>

using namespace std;

/**'
 * Recall that a struct is a class where all members are public.
 * Thus, we can use
 */
struct Point {
    Point(double x_, double y_): x{x_}, y{y_} {}
    double x;
    double y;
};

// function
double calculate_distance(double x1, double y1, double x2, double y2);
double calculate_distance(Point p1, Point p2); // overload

int main() {

    double distance = calculate_distance(0, 0, 3, 4);
    cout << "Distance is "<<distance<<" units."<<endl;

    Point p1(0, 0);
    Point p2(3, 4);
    cout << "Distance is " << calculate_distance(p2, p1)<<" units."<<endl;

}

double calculate_distance(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    return sqrt(pow(dx, 2) + pow(dy, 2));
}

double calculate_distance(Point p1, Point p2) {
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    return sqrt(pow(dx, 2) + pow(dy, 2));
}