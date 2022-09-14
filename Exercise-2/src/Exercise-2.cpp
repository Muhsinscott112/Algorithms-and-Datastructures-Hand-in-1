#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include <vector>
#include <ctime>
#include <random>

#include "Exercise-1.hpp"
#include "Exercise-2.hpp"

using namespace std;

int main (void)
{

    for (int i = 1; i <= 4; i++)
    {
        cout << sum_1(i) << endl;
    }

    cout << "\n";

    for (int i = 1; i <= 4; i++)
    {
        cout << sum_2(i) << endl;
    }

    cout << "\n";

    for (int i = 1; i <= 4; i++)
    {
        cout << sum_3(i) << endl;
    }

    cout << "\n";

    for (int i = 1; i <= 4; i++)
    {
        cout << sum_4(i) << endl;
    }
}