#include "Board.hpp"
#include "Player.hpp"
#include "City.hpp"

namespace pandemic
{
    class Medic : public Player
    { //medic "is a" player
    public:
        Medic(Board &, City);
    };
}