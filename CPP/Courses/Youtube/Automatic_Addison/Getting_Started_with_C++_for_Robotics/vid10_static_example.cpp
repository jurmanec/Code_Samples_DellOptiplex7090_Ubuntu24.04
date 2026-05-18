#include <iostream>

using namespace std;

/** 
 * static keyword for local variables inside a function. the variable retains its value between function calls.
*/
void increment_counter() {
    static int count = 0; // the line that starts with static must evaluate only once 
    count++;
    cout << "Counter: "<< count << endl;
}

int main() {

    for (auto i = 0; i < 5; i++) {
        increment_counter();
    }

}