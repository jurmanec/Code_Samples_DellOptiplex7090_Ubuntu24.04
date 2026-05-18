/**
 * @brief 
 * @version 0.1
 * @date 2026-05-17
 * 
 * @copyright Copyright (c) 2026
 * 
 * Tags: template_classes robotics c++ automatic_addison
 */

#include <iostream>

using namespace std;

template<typename T>
class Point {

    public:
    Point(T x, T y): x{x}, y{y} {}

    T getX() const {
        return x;
    }

    T getY() const {
        return y;
    }

    void printPoint() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }

    private:
    T x;
    T y;
};

int main() {
    Point<int> p1(5, 10);
    Point<double> p2(3.14, 2.71);

    cout << "Integer point: ";
    p1.printPoint();

    cout << "Double point: ";
    p2.printPoint();

}