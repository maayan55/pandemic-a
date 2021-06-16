#include "OperationsExpert.hpp"

namespace pandemic
{
    OperationsExpert &OperationsExpert::build()
    {
        board.putStation(city);
        return *this;
    }
}