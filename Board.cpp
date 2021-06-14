#include <string>
#include "Board.hpp"
using namespace std;
using namespace pandemic;

double &Board::operator[](City c)
{
    return map[c];
}
bool Board::is_clean() { return false; }
void Board::remove_cures() {}
ostream &pandemic::operator<<(ostream &os, const Board &b)
{
    return os << "out" << endl;
}