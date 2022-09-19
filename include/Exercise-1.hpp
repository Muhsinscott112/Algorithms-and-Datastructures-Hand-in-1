#pragma once

#include <iostream>

#include <vector>
#include <ctime>
#include <random>
#include <array>

using namespace std;

int random_vectors()
{
    // initialization of random numbers using the argument passed as seed
    // every time the program runs, we can expect different random numbers

    srand((unsigned)time(nullptr)); // time since jan/1/1970
    int M = 1 + (rand() % 5);       // random number from 1 - 5
    int N = 1 + (rand() % 5);       // random number from 1 - 5

    vector<int> myVector1;
    vector<int> myVector2;

    for (int i = 0; i < M; i++) // 1st vector
    {
        // random number between 1 and 5
        int randomNumber1 = 1 + (rand() % 10); 

        // random numbers are added at the end of the vector
        myVector1.push_back(randomNumber1);    
    }

    cout << "\n"
         << "v_1 =";

    for (vector<int>::iterator it = myVector1.begin(); 
        it != myVector1.end(); it++)
    {
        cout << " " << *it; // outputs integers in vector
    }

    for (int i = 0; i < N; i++) // 2nd vector
    {
        int randomNumber2 = 1 + (rand() % 10);

        // random numbers are added at the end of the vector
        myVector2.push_back(randomNumber2); 
    }

    cout << "\n"
         << "v_2 =";

    for (vector<int>::iterator it = myVector2.begin(); 
        it != myVector2.end(); it++)
    {
        cout << " " << *it; // outputs integers in vector
    }

    cout << "\n"
         << endl;

    // outputs number of elements
    cout << "integer count of v_2: " << myVector2.size() << endl; 

    return 0;
}