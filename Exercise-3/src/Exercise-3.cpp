#include <iostream>

#include <vector>
#include <ctime>
#include <random>

#include "Exercise-1.hpp"
#include "Exercise-3.hpp"

using namespace std;

int main(void)
{
    auto start_1 = chrono::steady_clock::now(); // Get start time

    for (int i = 50; i <= 800; i *= 2)
    {
        cout << sum_1(i) << endl;
        auto end_1 = chrono::steady_clock::now();                                                             // Get end time
        double elapsed_time_ns = double(chrono::duration_cast<chrono::nanoseconds>(end_1 - start_1).count()); // Get difference
        cout << "Elapsed time (ms):  " << elapsed_time_ns / pow(10, 6) << endl;                               // Elapsed time in milliseconds for an iteration
    }

    cout << "\n";

    auto start_2 = chrono::steady_clock::now();

    for (int i = 50; i <= 800; i *= 2)
    {
        cout << sum_2(i) << endl;
        auto end_2 = chrono::steady_clock::now();
        double elapsed_time_ns = double(chrono::duration_cast<chrono::nanoseconds>(end_2 - start_2).count());
        cout << "Elapsed time (ms):  " << elapsed_time_ns / pow(10, 6) << endl;
    }

    cout << "\n";

    auto start_3 = chrono::steady_clock::now();

    for (int i = 50; i <= 800; i *= 2)
    {
        cout << sum_3(i) << endl;
        auto end_3 = chrono::steady_clock::now();
        double elapsed_time_ns = double(chrono::duration_cast<chrono::nanoseconds>(end_3 - start_3).count());
        cout << "Elapsed time (ms):  " << elapsed_time_ns / pow(10, 6) << endl;
    }

    cout << "\n";

    auto start_4 = chrono::steady_clock::now();

    for (int i = 50; i <= 800; i *= 2)
    {
        cout << sum_4(i) << endl;
        auto end_4 = chrono::steady_clock::now();
        double elapsed_time_ns = double(chrono::duration_cast<chrono::nanoseconds>(end_4 - start_4).count());
        cout << "Elapsed time (ms):  " << elapsed_time_ns / pow(10, 6) << endl;
    }
}