#include "catch.hpp"
#include "../core/Tile.h"

using namespace std;

TEST_CASE("Tile : test constructor on all shapes - compatible shape with orientation"){
    REQUIRE_NOTHROW(Tile(Shape::L, 1, {true, true, false, false}));
    REQUIRE_NOTHROW(Tile(Shape::L, 2, {true, false, false, true}));
    REQUIRE_NOTHROW(Tile(Shape::I, 3, {true, false, true, false}));
    REQUIRE_NOTHROW(Tile(Shape::T, 4, {true, true, true, false}));
    REQUIRE_NOTHROW(Tile(Shape::NO_SHAPE, 5, {false, false, false, false}));
}

TEST_CASE("Tile : test constructor on all shapes - incompatible shape with orientation"){
    REQUIRE_THROWS(Tile(Shape::L, 1, {true, false, true, false}));
    REQUIRE_THROWS(Tile(Shape::L, 2, {true, true, true, false}));
    REQUIRE_THROWS(Tile(Shape::I, 3, {true, false, false, true}));
    REQUIRE_THROWS(Tile(Shape::T, 4, {true, true, true, true}));
    REQUIRE_THROWS(Tile(Shape::NO_SHAPE, 5, {false, false, false, true}));

}

TEST_CASE("Tile : test constructor - invalid goal"){
    REQUIRE_THROWS(Tile(Shape::T, 25, {true, true, true, false}));
}

TEST_CASE("Tile : test constructor - invalid size of orientation array"){
    REQUIRE_THROWS(Tile(Shape::T, 5, {true, true, true}));
}

TEST_CASE("Tile : Get shape"){
    Tile tile(Shape::T, 4, {true, false, true, true});
    REQUIRE(tile.getShape() == Shape::T);
}

TEST_CASE("Tile : Get goal"){
    Tile tile(Shape::T, 4, {true, false, true, true});
    REQUIRE(tile.getGoal() == 4);
}

TEST_CASE("Tile : Get orientation"){
    Tile tile(Shape::T, 4, {true, false, true, true});
    vector<bool> expected = {true, false, true, true};
    REQUIRE(tile.getOrientation().size() == 4);
    REQUIRE(expected == tile.getOrientation());
}

TEST_CASE("Tile : Rotate to right")
{
    Tile tile(Shape::T, 4, {true, false, true, true});
    vector<bool> expected = {true, true, false, true};
    tile.rotate(+1);
    vector<bool> result = tile.getOrientation();

    REQUIRE(expected == result);
}

TEST_CASE("Tile : Rotate to left")
{
    Tile tile(Shape::T, 4, {true, false, true, true});
    vector<bool> expected = {false, true, true, true};
    tile.rotate(-1);
    vector<bool> result = tile.getOrientation();

    REQUIRE(expected == result);
}

TEST_CASE("Tile : No rotation")
{
    Tile tile(Shape::T, 4, {true, false, true, true});
    vector<bool> expected = {true, false, true, true};
    tile.rotate(0);
    vector<bool> result = tile.getOrientation();

    REQUIRE(expected == result);
}
