#include <iostream>
#include <eigen3/Eigen/Dense>

using namespace std;

int main() {

    Eigen::Vector3d v(1, 2, 3);
    cout << "v = "<< v.transpose() << endl;

}