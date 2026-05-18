/**
 * @brief 
 * @version 0.1
 * @date 2026-05-17
 * 
 * @copyright Copyright (c) 2026
 * 
 * Tags: robotics c++ automatic_addison random_numbers mersenne_twister
 * 
 * Note: Mersenne Twistter provides better statistical properties than the standard `rand()` function.
 */

#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));


    int random_int = rand();
    cout << "Random integer: " << random_int << endl;

    float random_float = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
    cout << "Random float between 0 and 1: " << random_float << endl;

    int min_val = 10;
    int max_val = 50;

    int rand_range = min_val + (rand() % (max_val - min_val + 1));
    cout << "Random integer between " << min_val << " and " << max_val << ": " << rand_range << endl;

    /** */
    random_device rd;
    mt19937 gen(rd());

    uniform_real_distribution<double> dis(0.0, 1.0);
    double random_double  = dis(gen);
    cout << "Random double between 0 and 1 (Mersenne Twister): " << random_double << endl;
}