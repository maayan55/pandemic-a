#include "Board.hpp"
#include "Player.hpp"
#include "City.hpp"

namespace pandemic
{
    class OperationsExpert : public Player
    { //OperationsExpert "is a" player
    public:
        OperationsExpert(Board &, City);
    };
}
