#ifndef __EXERCISE_2_H_
#define __EXERCISE_2_H_

#include <iostream>

#include <vector>
#include <ctime>
#include <random>

using namespace std;

int sum_1(int n) //(1)
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        ++sum;
    }
    return sum;
}

int sum_2(int n) //(2)
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            ++sum;
        }
    }
    return sum;
}

int sum_3(int n) //(3)
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n * n; ++j)
        {
            ++sum;
        }
    }
    return sum;
}

int sum_4(int n) //(4)
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            ++sum;
        }
    }
    return sum;
}

#endif