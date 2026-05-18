/**
 * @brief 
 * @version 0.1
 * @date 2026-05-17
 * 
 * @copyright Copyright (c) 2026
 * 
 * Tags: file_input_output file_io c++ robotics
 */

#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main() {

    string filename = "robot_data.txt";
    ofstream output_file(filename);

    if (output_file.is_open()) {
        output_file << "Sensor 1: 10.5\n";
        output_file << "Sensor 2: 20.7\n";
        output_file << "Sensor 3: 15.2\n";
        output_file.close();
        cout << "Data written to file: " << filename << endl;
    } else {
        cout << "Unable to open file for writing." << endl;
    }

    ifstream input_file(filename);

    string line;
    if (input_file.is_open()) {
        while(getline(input_file, line)) {
            cout << line << endl;
        }
        input_file.close();
    } else {
        cout << "Unable to open file for readhing";
    }

}