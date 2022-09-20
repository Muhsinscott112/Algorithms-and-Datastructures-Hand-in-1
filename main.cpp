#include <iostream>

#include <vector>
#include <ctime>
#include <random>
#include <algorithm>

#include "Exercise-1.hpp"
#include "Exercise-3.hpp"


using namespace std;

int main(int argc, char * argv[]) {

    int N = 20; int sum = 0;
    
    vector <int > vec1;
    vector <int > vec2;
    vector <int >::iterator Itrr1;
    vector <int >::iterator Itrr2;

    for (int i=0; i<N; i++){
        vec1.push_back(rand()% 100 + 1);
    }

    for (int i=0; i<N; i++){
        vec2.push_back(rand()% 100 + 1);
    }

    for (Itrr1 = vec1.begin(); Itrr1 < vec1.end(); Itrr1 ++){  
        for (Itrr2 = vec2.begin(); Itrr2 < vec2.end(); Itrr2 ++){
            if (*Itrr1 == *Itrr2)
            {
                sum++;
                Itrr1++;
            }
        }
    }

    return 0;
}

