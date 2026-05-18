/**
 * Tags: operator_overloading c++ robotics
 * 
 */
#include <iostream>

using namespace std;


struct Distance {

    Distance(int m = 0): meters{m} {};
    Distance operator+(const Distance& other) const {
        return Distance(meters + other.meters);
    }
    int meters;
};

// class Distance {

//     public:
//     Distance(int m = 0): meters{m} {};
//     /**
//      * Doesn't mutate class instance
//      */
//     Distance operator+(const Distance& other) const {
//         return Distance(meters + other.meters);
//     }
//     int meters;
// };

int main(int argc, char const *argv[]) {

    Distance d1{5};
    Distance d2{10};

    Distance sum  = d1 + d2;

    cout << "d1 = " << d1.meters <<endl;
    cout << "d2 = " << d2.meters <<endl;
    cout<<"sum (" << d1.meters<< " + " << d2.meters << ") = " << sum.meters << endl;
}
