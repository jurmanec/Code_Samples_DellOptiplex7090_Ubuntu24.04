#include <iostream>
#include <stdexcept>

using namespace std;

double divide(double a, double b) {
    if (b == 0) {
        throw runtime_error("Division by zero");
    }
    return a / b;
}

int main() {
    try {
        double result = divide(10, 0);
        cout << "Result: " << result << endl;
    } catch (const exception& e) {
        cout << "Exception: " << e.what() << endl;
    }

}