#include "Board.hpp"
#include "Player.hpp"
#include "City.hpp"

namespace pandemic
{
    class GeneSplicer : public Player
    { //geneSplicer "is a" player
    public:
        GeneSplicer(Board &, City);
    };
}