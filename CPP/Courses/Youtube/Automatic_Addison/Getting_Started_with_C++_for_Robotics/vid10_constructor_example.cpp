#include <iostream>
#include <string>

using namespace std;

class Robot {

    public:
    Robot(string name, int x, int y): name_{name}, x_{x}, y_{y} {
        cout << "Robot " << name_ << " created at position ("<<x_<<", "<<y_<<")"<<endl; 
    }


    private:
    string name_;
    int x_;
    int y_;
};

int main() {
    Robot r1("JacobUrmanecBot1",0, 0);
    Robot r2("JacobUrmanecBot2",10, 20);

}