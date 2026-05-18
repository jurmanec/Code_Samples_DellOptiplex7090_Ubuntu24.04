#include <iostream>
#include <filesystem>

using namespace std;

enum class Color {red, blue, green};

int main() {
    cout<<"File: " << filesystem::path(__FILE__).filename() << "\n";
    
    Color c = Color::red;
    if (c == Color::red) {
        cout << "c is red"<< endl;
    }

    Color c1{1};
    if (c1 == Color::blue) {
        cout << "c1 is blue" << endl;
    }

    

}