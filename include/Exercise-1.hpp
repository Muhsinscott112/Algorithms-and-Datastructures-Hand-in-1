#ifndef __EXERCISE_1_H_
#define __EXERCISE_1_H_

#include <iostream>

#include <vector>
#include <ctime>
#include <random>

using namespace std;

int random_vectors()
{
    srand((unsigned)time(nullptr)); // time elapsed since jan 1 1970
    int M = 1 + (rand() % 5);
    int N = 1 + (rand() % 5);

    cout << "M=" << M; // print random number M.
    cout << "\n";
    cout << "N=" << N; // print random number N.

    cout << "\n";
    vector<int> myVector1;

    // vector<int>::iterator itr = myVector1.begin(); itr != myVector1.end(); itr++

    for (int i = 0; i < M; i++)
    {
        int randomNumber1 = 1 + (rand() % 10);
        myVector1.push_back(randomNumber1); // Random numbers are pushed to vector
        cout << myVector1.back() << endl;   // returns last element in vector
    }
    cout << "\n";

    for (int j = 0; j < N; j++)
    {
        int randomNumber2 = 1 + (rand() % 10);
        cout << randomNumber2 << endl; // prints N random numbers.
    }
    return 0;
}

#endif