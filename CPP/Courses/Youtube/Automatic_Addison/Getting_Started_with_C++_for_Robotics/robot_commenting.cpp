#include <iostream>

using namespace std;

int main() {
    cout << "Starting.." << endl;

    double speed = 0.5;
    double time = 10.0;

    /**
     * distance = speed * time
     */
    double distance = speed * time;
    
    // print result
    cout << "The robot travelled "<< distance << " meters."<< endl;

    cout << "Done!!"<<endl;
}