#ifndef __EXERCISE_4_H_
#define __EXERCISE_4_H_

#include <iostream>

#include <vector>
#include <ctime>
#include <random>
#include <algorithm>

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

private:
    vector<int> data; // vector that stores heap elements

    int PARENT(int i){ // return parent of i'th element
        return (i - 1) / 2;
    }

    int LEFT(int i){ // return left child of i'th element
        return (2 * i + 1);
    }

    int RIGHT(int i){ // return right child of i'th element
        return (2 * i + 2);
    }



};

#endif