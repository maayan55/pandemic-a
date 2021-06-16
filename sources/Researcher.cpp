#include <string>
using namespace std;
#include "Researcher.hpp"
const int CARDS = 5;

namespace pandemic
{
    Researcher &Researcher::discover_cure(Color color)
    {
        if (!board.hasDisCure(color))
        {
            int checkNumOfCards = 0;
            for (const auto &cityCard : cardsCity)
            {
                if (Board::colorCity.at(cityCard) == color)
                {
                    checkNumOfCards++;
                }
            }
            if (checkNumOfCards < CARDS)
            {
                throw string("error!");
            }

            int count = 1;
            auto it = cardsCity.begin();
            while (it != cardsCity.end())
            {
                if (count < CARDS && Board::colorCity.at(*it) == color)
                {
                    cardsCity.erase(it++);
                    count++;
                }
                else
                {
                    ++it;
                }
            }
            board.addDiseaseCure(color);
        }
        return *this;
    }
}