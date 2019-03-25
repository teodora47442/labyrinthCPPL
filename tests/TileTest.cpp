#include "catch.hpp"
#include "../core/Tile.h"

using namespace std;

TEST_CASE("Tile construction : no throw"){

}

TEST_CASE("Tile Construction : throw"){

}

TEST_CASE("Get shape"){
    Tile tile(Shape::T, 4, {true, false, true, true});
    REQUIRE(tile.getShape() == Shape::T);
}

TEST_CASE("Get goal"){
    Tile tile(Shape::T, 4, {true, false, true, true});
    REQUIRE(tile.getGoal() == 4);
}

TEST_CASE("Get orientation"){
    Tile tile(Shape::T, 4, {true, false, true, true});
    vector<bool> expected = {true, false, true, true};
    REQUIRE(tile.getOrientation().size() == 4);
    REQUIRE(expected == tile.getOrientation());
}

TEST_CASE("Rotate to right")
{
    Tile tile(Shape::T, 4, {true, false, true, true});
    vector<bool> expected = {true, true, false, true};
    tile.rotate(+1);
    vector<bool> result = tile.getOrientation();

    REQUIRE(expected == result);
}

TEST_CASE("Rotate to left")
{
    Tile tile(Shape::T, 4, {true, false, true, true});
    vector<bool> expected = {false, true, true, true};
    tile.rotate(-1);
    vector<bool> result = tile.getOrientation();

    REQUIRE(expected == result);
}

TEST_CASE("No rotation")
{
    Tile tile(Shape::T, 4, {true, false, true, true});
    vector<bool> expected = {true, false, true, true};
    tile.rotate(0);
    vector<bool> result = tile.getOrientation();

    REQUIRE(expected == result);
}
