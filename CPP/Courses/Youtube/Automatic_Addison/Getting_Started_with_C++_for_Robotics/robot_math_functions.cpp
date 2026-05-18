#include <iostream>
#include <cmath>

using namespace std;



int main() {

    double angle = 45.0; // angle in degrees
    double radians  = angle * M_PI / 180.0; // angle in radians 
    double sine = sin(radians);
    double cosine = cos(radians);

    cout << "Sine: " << sine << endl;
    cout << "Cosine: " << cosine << endl;

}