#pragma once
#include <string>
#include <map>
#include <iostream>
#include "City.hpp"

namespace pandemic
{
    class Board
    {
    private:
        std::map<City, double> map;

    public:
        double &operator[](City c);
        bool is_clean();
        void remove_cures();
        friend std::ostream &operator<<(std::ostream &os, const Board &b);
    };
}