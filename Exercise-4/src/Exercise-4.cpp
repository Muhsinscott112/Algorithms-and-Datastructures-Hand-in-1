#include <vector>
#include <iostream>

#include "Exercise-4.hpp"

using namespace std;

// iterator type specification
typedef vector<int>::iterator itr;

class MaxHeapbuild : public MaxHeap
{
public:
    // is the heap empty?
    bool isEmpty() const override;

    // number of elements in the heap
    int size() override;

    // add an element to the heap
    void insert(const int x) override;

    // find the maximum element in the heap
    const int findMax() const override;

    // delete and return the maximum element of the heap
    int deleteMax() override;

private:
    // vector that stores heap elements
    vector<int> data;

    // parent of it'th element
    itr PARENT(itr it);

    // left child of it'th element
    itr LEFT(itr it);

    // right child of it'th element
    itr RIGHT(itr it);

    // heapify following a bottom-up approach
    void buildHeapifyUp(itr it);

    // heapify following a top-down approach
    void buildHeapifyDown(itr it);
};

itr MaxHeapbuild::PARENT(itr it)
{
    return data.begin() + ((it - data.begin()) - 1) / 2;
}

itr MaxHeapbuild::LEFT(itr it)
{
    return data.begin() + 2 * (it - data.begin()) + 1;
}

itr MaxHeapbuild::RIGHT(itr it)
{
    return data.begin() + 2 * (it - data.begin()) + 2;
}

void MaxHeapbuild::buildHeapifyUp(itr it)
{

    if (data.size() == 0)
    {
        return;
    }

    if (it < data.begin() || it > data.end()) // return if index exceeds boundary
    {
        return;
    }

    // base case
    // no more swapping, if we're at the root
    if (it == data.begin())
    {
        return;
    }

    if (*it > *(PARENT(it)))
    {
        swap(*it, *(PARENT(it)));
    }
    buildHeapifyUp(PARENT(it));
}

void MaxHeapbuild::insert(const int x)
{
    data.push_back(x);              // fill in placeholder at the end of vector
    buildHeapifyUp(data.end() - 1); // place element at its proper position
}

void MaxHeapbuild::buildHeapifyDown(itr it)
{

    if (data.size() == 0)
    {
        return;
    }

    if (it < data.begin() || it > data.end()) // return if index exceeds boundary
    {
        return;
    }

    itr swapID = it; // we want to compare a parent to two children

    // if left child is greater than current parent, swap
    if (LEFT(it) < (data.end() - 1) && *LEFT(it) > *it)
    {
        swapID = LEFT(it);
    }

    // if right child is greater than current parent, swap
    /* also in case we have two children greater than parent,
     we want parent to swap with the greater of the two children */
    if (RIGHT(it) < (data.end() - 1) && *swapID > *it)
    {
        swapID = RIGHT(it);
    }

    /* recursion continues as long as we have two elements
    that need to be swapped */

    // if we have two elements that don't have to be swapped:
    if (swapID != it)
    {
        // swap back parent with one of its children
        swap(*it, *swapID);
        buildHeapifyDown(swapID); // keep recursing till the index of child swapped
    }                             // if this isn't the case, return
    return;
}

int MaxHeapbuild::deleteMax()
{
    if (data.size() == 1)
    {
        data.pop_back();
        return *(data.begin());
    }
    else
    {
        swap(*(data.begin()), data.back());
        data.pop_back();
        buildHeapifyDown(data.begin());
    }
    return *(data.begin());
}

bool MaxHeapbuild::isEmpty() const { return data.empty(); }

int MaxHeapbuild::size() { return data.size(); }

const int MaxHeapbuild::findMax() const { return *(data.begin()); }


int main(int argc, char *argv[])
{
    MaxHeap *h = new MaxHeapbuild();

    h->insert(1);
    h->insert(2);
    h->insert(3);
    h->insert(4);
    h->insert(5);

    if (h->isEmpty() == 0)
    {
        cout << "FALSE" << endl;
    }
    else
    {
        cout << "TRUE" << endl;
    }

    cout << "Size: " << h->size() << endl;

    h->insert(-3);

    cout << "Current max: " << h->findMax() << endl;

    h->deleteMax();
    h->deleteMax();
    
    cout << "Size: " << h->size() << endl;
    

    return 0;
}