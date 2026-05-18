#include <iostream>
#include <filesystem>
#include "Building.h"

using namespace std;

int main() {
    cout<<"File: " << filesystem::path(__FILE__).filename() << "\n";
    
    Building b;
    b.setNumberOfFloors(25);
    b.setTotalSquareFootage(100);
    cout << "Building b: [floors: " << b.getNumberOfFloors() << ", totalSquareFootage: " << b.getTotalSquareFootage() <<"]" << endl;

}