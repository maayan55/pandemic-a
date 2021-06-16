#include "Board.hpp"
#include "Player.hpp"
#include "City.hpp"

namespace pandemic
{
    class Virologist : public Player
    {
    public:
        Virologist(Board &b, City c) : Player(b, c, "Virologist") {}
        Virologist &treat(City c);
    };
}