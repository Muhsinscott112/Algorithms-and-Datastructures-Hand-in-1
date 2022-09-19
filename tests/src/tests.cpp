#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <assert.h>

extern "C++"
{
#include "Exercise-1.hpp"
#include "Exercise-3.hpp"
#include "Exercise-4.hpp"
#include "Exercise-4/src/Exercise-4.cpp"
}

using namespace std;

MaxHeap *h1 = new buildMaxHeap();

TEST_CASE("empty")
{
    h1->insert(9);
    h1->insert(2);
    h1->insert(13);
    h1->insert(3);

    REQUIRE(h1->isEmpty() == 0);

    h1->deleteMax();
    h1->deleteMax();
    h1->deleteMax();
    h1->deleteMax();

    REQUIRE(h1->isEmpty() == 1);
}

MaxHeap *h2 = new buildMaxHeap();

TEST_CASE("size")
{
    h2->insert(9);
    h2->insert(2);
    h2->insert(13);
    h2->insert(3);

    REQUIRE(h2->size() == 4);

    h2->deleteMax();
    h2->deleteMax();

    REQUIRE(h2->size() == 2);

}

MaxHeap *h3 = new buildMaxHeap();

TEST_CASE("find the max element")
{
    h3->insert(9);
    h3->insert(2);
    h3->insert(13);
    h3->insert(3);

    REQUIRE(h3->findMax() == 13);
}