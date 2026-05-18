#include <iostream>
#include <filesystem>
#include <fstream>
#include "utils.hpp"

using namespace std;

int main() {
    cout<<"File: " << filesystem::path(__FILE__).filename() << "\n";
    
    // ofstream is for reading.
    // ifstream is for writing.
    // declare output stream pointer variable.
    // 1) Open the file (for output)
    // 2) Write data to the file
    // 3) Close the file 
     

    /**
     * Create file and write to it.
     */
    // ofstream outFile; // for creating files and writing to them.
    // /**
    //  * Open a file using ofstream (creates file if doesn't exist)
    //  */
    // outFile.open("someStrings.txt"); // opening the file will create it if it does not exist.
    // if (outFile.fail()) {
    //     cout<<"An error occured creating the file."<<endl;
    // } else {
    //     cout<<"File created!!"<<endl;
    // }

    // // ifstream thisFile("someStrings2.txt");
    // // if (thisFile.is_open()) {
    // //     cout<<"someStrings2.txt is open!!"<<endl;
    // // }
    // // thisFile.open("someStrings2.txt");
   
    // /**
    //  * Write to the file
    //  */
    // string userString;  
    // bool firstLine = true;
    // //Process the file
    // while(userString != "-999") {
    //     cout<<"Please enter a string to save to a file (-999 to quit): ";
    //     getline(cin, userString);
    //     if (userString == "-999") {
    //         break;
    //     } else {
    //         if (firstLine) {
    //             outFile << userString;
    //             firstLine = false;
    //         } else {
    //             outFile << endl;
    //             outFile << userString;
    //         }
    //     }
    // }
    // /**
    //  * close the file
    //  */
    // outFile.close(); 

    /**
     * Read file that already exists.
     */
    // ifstream inputFile; // for opening files and reading them.
    // string userString; 
    // inputFile.open("someStrings.txt");
    // if (inputFile.fail()) {
    //     cout << "Error opening the file!!"<<endl;
    // } else  {
    //     while(!inputFile.eof()) {
    //         getline(inputFile, userString);
    //         cout << userString << endl;
    //     }
    //     inputFile.close();
    // }

    /**
     * Numbers
     */
    ofstream outFile;
    string userString;
    int inputInt;
    outFile.open("someNumbers.txt");
    if (outFile.fail()) {
        cout << "Error opening the output file" << endl;
    } else {
        while (inputInt != -999) {
            cout << "Please enter an integer (-999 to quit): ";
            cin >> inputInt;
            // numericInputHandleError();
            if (inputInt == -999) {
                break;
            } else {
                outFile << inputInt << endl;
            }
        }
    }

    cout<<"Done!!"<<endl;
}