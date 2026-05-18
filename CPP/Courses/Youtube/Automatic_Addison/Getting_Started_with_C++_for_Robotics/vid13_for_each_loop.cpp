/**
 * @brief 
 * @version 0.1
 * @date 2026-05-17
 * 
 * @copyright Copyright (c) 2026
 * 
 * Tags: c++ robotics for_each_loops
 * 
 * Note the improvement on Java here. We are not limited to an enclosing scope.
 */

 #include <iostream>
 #include <vector>
 #include <algorithm>

 using namespace std;

 int main() {
    vector<int> distances = { 5, 10, 3, 7, 9 };

    cout <<"Original distances: ";
    for (int d: distances) {
        cout << d << " ";
    }
    cout << endl;

    /**
     * Increment each distance by 1
     */
    for_each(
        distances.begin(), 
        distances.end(), 
        [] (int &d) { // iteration varable ref to distance value
            d+=1; 
        }
    );

    cout << "Updated distances: ";
        for (int d: distances) {
        cout << d << " ";
    }
    cout << endl;
 }