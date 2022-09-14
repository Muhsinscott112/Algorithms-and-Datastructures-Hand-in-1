#ifndef __EXERCISE_4_H_
#define __EXERCISE_4_H_

#include <iostream>

#include <vector>
#include <ctime>
#include <random>

using namespace std;

class MaxHeap
{
public:
    // is the heap empty?
    virtual bool isEmpty() const = 0;

    // number of elements in the heap
    virtual int size() = 0;

    // add an element to the heap
    virtual void insert(const int x) = 0;

    // find the maximum element in the heap
    virtual const int findMax() const;

    // delete and return the maximum element of the heap
    virtual int deleteMax();
};

#endif