#include "catch.hpp"
#include "../core/Deck.h"

using namespace std;

TEST_CASE("Deck : test constructor"){
    vector<unsigned> v;
    REQUIRE_NOTHROW(Deck deck(v));
}

TEST_CASE("Deck : test size when deck is not empty"){
    vector<unsigned> v = {1,2,3,4,5};
    Deck deck(v);
    REQUIRE(deck.size() == 5);
}

TEST_CASE("Deck : test size when deck is empty"){
    vector<unsigned> v = {};
    Deck deck(v);
    REQUIRE(deck.size() == 0);
}

TEST_CASE("Deck : get goal"){
    vector<unsigned> v = {5,4,3,2,1};
    Deck deck(v);
    REQUIRE(deck.getGoal() == 1);
}

//TEST_CASE("Deck : get goal, deck empty"){
//    vector<unsigned> v = {};
//    Deck deck(v);
//    REQUIRE_THROWS(deck.getGoal());
//}

TEST_CASE("Deck : test isEmpty - not empty"){
    vector<unsigned> v = {5,4,3,2,1};
    Deck deck(v);
    REQUIRE_FALSE(deck.isEmpty());
}

TEST_CASE("Deck : test isEmpty - empty"){
    vector<unsigned> v = {};
    Deck deck(v);
    REQUIRE(deck.isEmpty());
}

TEST_CASE("Deck : test remove"){
    vector<unsigned> v = {5,4,3,2,1};
    Deck deck(v);
    deck.remove();
    REQUIRE(deck.getGoal() == 2);
}

TEST_CASE("Deck : test restore when deck is empty"){
    vector<unsigned> v = {};
    vector<unsigned> v2 = {1,2,3,4,5};
    Deck deck(v);
    deck.restore(v2);
    REQUIRE(deck.size() == 5);
    for(unsigned i = 5; i > 0; i--){
        REQUIRE(deck.getGoal() == i);
        deck.remove();
    }
}

TEST_CASE("Deck : test restore when deck is not empty"){
    vector<unsigned> v = {10, 20};
    vector<unsigned> v2 = {1,2,3,4,5};
    Deck deck(v);
    deck.restore(v2);
    REQUIRE(deck.size() == 5);
    for(unsigned i = 5; i > 0; i--){
        REQUIRE(deck.getGoal() == i);
        deck.remove();
    }
}

