#pragma once
#include <map>
#include <set>
#include "City.hpp"
#include "Color.hpp"

namespace pandemic
{
    class Board
    {
    private:
        std::map<City, int> pandemic; //map of city and it's diseasecure number
        std::set<Color> discoveredCure;
        std::set<City> station;

    public:
        static std::map<City, std::set<City>> accessible;
        static std::map<City, Color> colorCity;

        int &operator[](City city);
        bool is_clean();
        void remove_cures();
        void remove_stations();
        friend std::ostream &operator<<(std::ostream &os, const Board &b);

        bool hasDisCure(Color color);
        bool hasStation(City c);
        void addDiseaseCure(Color color);
        void putStation(City c);
    };
}