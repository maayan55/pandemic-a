#include "Board.hpp"
#include "Player.hpp"
#include "City.hpp"

namespace pandemic
{
    class Scientist : public Player
    { //scientist "is a" player
    private:
        int num;

    public:
        Scientist(Board &, City, int);
    };
}