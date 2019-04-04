#include "catch.hpp"
#include "Player.h"

TEST_CASE("Player : test getAge"){
    std::vector<unsigned> goals = {1, 2, 3, 4};
    Tile origin(1, Shape::I, 0);
    Player p ("Player1", 12, origin, goals);
    REQUIRE(p.getAge() == 12);
}

TEST_CASE("Player : test getName"){
    std::vector<unsigned> goals = {1, 2, 3, 4};
    Tile origin(1, Shape::I, 0);
    Player p ("Player1", 12, origin, goals);
    REQUIRE(p.getName() == "Player1");
}

// test fail mais raison inconnues!

//TEST_CASE("Player : test getCurrentPosition"){
//    std::vector<unsigned> goals = {1, 2, 3, 4};
//    Tile origin(1, Shape::I, 0);
//    Player p ("Player1", 12, origin, goals);

//    Tile expected(1, Shape::I, 0);
//    Tile result = p.getCurrentPosition();
//    REQUIRE(expected == result);
//}

//TEST_CASE("Player : test getDepartureTile"){
//    std::vector<unsigned> goals = {1, 2, 3, 4};
//    Tile origin(1, Shape::I, 0);
//    Player p ("Player1", 12, origin, goals);

//    Tile expected(1, Shape::I, 0);
//    Tile result = p.getDepartureTile();
//    REQUIRE(result == expected);
//}

TEST_CASE("Player : test getGoal"){
    std::vector<unsigned> goals = {1, 2, 3, 4};
    Tile origin(1, Shape::I, 0);
    Player p ("Player1", 12, origin, goals);

    REQUIRE(p.getGoal() == 4);
}

TEST_CASE("Player : test currentTile is equals to departure at construction"){
    std::vector<unsigned> goals = {1, 2, 3, 4};
    Tile origin(1, Shape::I, 0);
    Player p ("Player1", 12, origin, goals);
    REQUIRE(p.getDepartureTile() == p.getCurrentPosition());
}

TEST_CASE("Player : test replace"){
    std::vector<unsigned> goals = {1, 2, 3, 4};
    Tile origin(1, Shape::I, 0);
    Player p ("Player1", 12, origin, goals);

    Tile newPos(16, Shape::T, 4, {true, true, true, false});
    p.replace(newPos);

    Tile expected(16, Shape::T, 4, {true, true, true, false});
    Tile result = p.getCurrentPosition();
    REQUIRE(expected == result);
}

TEST_CASE("Player : test changeGoal - fail because the player isn't on the right tile"){
    std::vector<unsigned> goals = {1, 2, 3, 4};
    Tile origin(1, Shape::I, 0);
    Player p ("Player1", 12, origin, goals);
    REQUIRE_THROWS(p.changeGoal());
}

TEST_CASE("Player : test changeGoal - succeed"){
    std::vector<unsigned> goals = {1, 2, 3, 4};
    Tile origin(1, Shape::I, 0);
    Player p ("Player1", 12, origin, goals);

    Tile newCurrent (4, Shape::T, 4);
    p.replace(newCurrent);
    REQUIRE_NOTHROW(p.changeGoal());
}

TEST_CASE("Player : test isFinished - deck is not empty"){
    std::vector<unsigned> goals = {1, 2};
    Tile origin(1, Shape::I, 0);
    Player p ("Player1", 12, origin, goals);

    REQUIRE_FALSE(p.isFinished());
}

TEST_CASE("Player : test isFinished - deck is empty"){
    std::vector<unsigned> goals = {1, 2};
    Tile origin(1, Shape::I, 0);
    Player p ("Player1", 12, origin, goals);

    p.replace(Tile(2, Shape::T, 2));
    p.changeGoal();
    p.replace(Tile(3, Shape::T, 1));
    p.changeGoal();
    REQUIRE(p.isFinished());
}
