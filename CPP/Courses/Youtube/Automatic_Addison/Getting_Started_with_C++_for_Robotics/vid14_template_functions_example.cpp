/**
 * @brief 
 * @version 0.1
 * @date 2026-05-17
 * 
 * @copyright Copyright (c) 2026
 * 
 * Tags: template_functions automatic_addison c++ robotics
 */

 #include <iostream>


 using namespace std;

template <typename T>
T find_max(T a, T b) {
    return (a > b)? a: b;
}

template <typename T, typename U> // multiple variables
void find_max(T a, U b) {
   // do stuff 
}

int main()  {

    cout << "Max of 10 and 20 is " << find_max<int>(10, 20) << endl;
    cout << "Max of 5.5 and 2.1 is " << find_max<double>(5.5, 2.1) << endl;

 }