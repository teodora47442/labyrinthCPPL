#include "catch.hpp"

#include "random.hpp"

#include <iostream>

using namespace std;

TEST_CASE("Random")
{
    for(int i = 0; i < 10; i++)
        cout << dg::math::random(0, 10, true) << " ";
    cout << endl;

    for(int i = 0; i < 10; i++)
        cout << dg::math::random(0, 10) << " ";
    cout << endl;
}
