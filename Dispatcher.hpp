#include "Board.hpp"
#include "Player.hpp"
#include "City.hpp"

namespace pandemic
{
    class Dispatcher : public Player
    { //disaptcher "is a" player
    public:
        Dispatcher(Board &, City);
    };
}