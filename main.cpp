#include <iostream>

#include <vector>
#include <ctime>
#include <random>
#include <algorithm>

#include "Exercise-1.hpp"
#include "Exercise-3.hpp"

using namespace std;

int main(int, char **)
{
    int myints[] = {10, 20, 30, 5, 15};
    vector<int> v(myints, myints + 5);
    cout << v[1];
}
