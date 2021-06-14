#include "doctest.h"
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Scientist.hpp"
#include "Researcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"
#include "GeneSplicer.hpp"
#include "FieldDoctor.hpp"

#include <iostream>

using namespace pandemic;
using namespace std;

TEST_CASE("Board")
{
    Board board; // Initialize an empty board (with 0 disease cubes in any city).

    board[City::Algiers] = 4;    // put 4 black disease cubes in Algiers
    board[City::Chicago] = 3;    // put 3 blue disease cubes in Chicago
    board[City::London] = 1;     // put 1 blue disease cubes in London
    board[City::LosAngeles] = 2; // put 2 yellow disease cubes in LosAngeles
    board[City::Miami] = 1;      // put 1 yellow disease cubes in Miami
    board[City::NewYork] = 4;    // put 3 blue disease cubes in NewYork
    board[City::NewYork] = 3;    //c hange number of disease cubes in NewYork to 3
    board[City::Paris] = 2;      // put 2 blue disease cubes in  Paris
    board[City::Sydney] = 1;     // put 3 red disease cubes in Sydney
    board[City::Sydney] = 3;     // change number of disease cubes in Sydney to 3
    board[City::Tokyo] = 4;      // put 4 red disease cubes in  Tokyo
    board[City::Washington] = 2; // put 2 blue disease cubes in  Washington

    CHECK_EQ(board[City::Algiers], 4);
    CHECK_EQ(board[City::Chicago], 3);
    CHECK_EQ(board[City::London], 1);
    CHECK_EQ(board[City::LosAngeles], 2);
    CHECK_EQ(board[City::Miami], 1);
    CHECK_EQ(board[City::NewYork], 3);
    CHECK_EQ(board[City::Paris], 2);
    CHECK_EQ(board[City::Sydney], 3);
    CHECK_EQ(board[City::Tokyo], 4);
    CHECK_EQ(board[City::Washington], 2);

    CHECK_THROWS(board[City::Algiers] = 7);
    CHECK_THROWS(board[City::Chicago] = 1);
    CHECK_THROWS(board[City::London] = 5);
    CHECK_THROWS(board[City::LosAngeles] = 4);
    CHECK_THROWS(board[City::Miami] = 3);
    CHECK_THROWS(board[City::NewYork] = 6);
    CHECK_THROWS(board[City::Paris] = 1);
    CHECK_THROWS(board[City::Sydney] = 5);
    CHECK_THROWS(board[City::Sydney] = 2);
    CHECK_THROWS(board[City::Washington] = 3);
}
