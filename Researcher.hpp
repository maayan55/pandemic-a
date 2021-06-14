#include "Board.hpp"
#include "Player.hpp"
#include "City.hpp"

namespace pandemic
{
    class Researcher : public Player
    { //reasercher "is a" player
    public:
        Researcher(Board &, City);
    };
}