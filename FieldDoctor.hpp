#include "Board.hpp"
#include "Player.hpp"
#include "City.hpp"

namespace pandemic
{
    class FieldDoctor : public Player
    { //fieldDoctor "is a" player
    public:
        FieldDoctor(Board &, City);
    };
}