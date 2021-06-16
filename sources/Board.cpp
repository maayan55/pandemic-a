#include "Board.hpp"
using namespace std;
namespace pandemic
{
    map<City, set<City>> Board::accessible =
        {{Algiers, {Madrid, Paris, Istanbul, Cairo}},
         {Atlanta, {Chicago, Miami, Washington}},
         {Baghdad, {Tehran, Istanbul, Cairo, Riyadh, Karachi}},
         {Bangkok, {Kolkata, Chennai, Jakarta, HoChiMinhCity, HongKong}},
         {Beijing, {Shanghai, Seoul}},
         {Bogota, {MexicoCity, Lima, Miami, SaoPaulo, BuenosAires}},
         {BuenosAires, {Bogota, SaoPaulo}},
         {Cairo, {Algiers, Istanbul, Baghdad, Khartoum, Riyadh}},
         {Chennai, {Mumbai, Delhi, Kolkata, Bangkok, Jakarta}},
         {Chicago, {SanFrancisco, LosAngeles, MexicoCity, Atlanta, Montreal}},
         {Delhi, {Tehran, Karachi, Mumbai, Chennai, Kolkata}},
         {Essen, {London, Paris, Milan, StPetersburg}},
         {HoChiMinhCity, {Jakarta, Bangkok, HongKong, Manila}},
         {HongKong, {Bangkok, Kolkata, HoChiMinhCity, Shanghai, Manila, Taipei}},
         {Istanbul, {Milan, Algiers, StPetersburg, Cairo, Baghdad, Moscow}},
         {Jakarta, {Chennai, Bangkok, HoChiMinhCity, Sydney}},
         {Johannesburg, {Kinshasa, Khartoum}},
         {Karachi, {Tehran, Baghdad, Riyadh, Mumbai, Delhi}},
         {Khartoum, {Cairo, Lagos, Kinshasa, Johannesburg}},
         {Kinshasa, {Lagos, Khartoum, Johannesburg}},
         {Kolkata, {Delhi, Chennai, Bangkok, HongKong}},
         {Lagos, {SaoPaulo, Khartoum, Kinshasa}},
         {Lima, {MexicoCity, Bogota, Santiago}},
         {London, {NewYork, Madrid, Essen, Paris}},
         {LosAngeles, {SanFrancisco, Chicago, MexicoCity, Sydney}},
         {Madrid, {London, NewYork, Paris, SaoPaulo, Algiers}},
         {Manila, {Taipei, SanFrancisco, HoChiMinhCity, Sydney, HongKong}},
         {MexicoCity, {LosAngeles, Chicago, Miami, Lima, Bogota}},
         {Miami, {Atlanta, MexicoCity, Washington, Bogota}},
         {Milan, {Essen, Paris, Istanbul}},
         {Montreal, {Chicago, Washington, NewYork}},
         {Moscow, {StPetersburg, Istanbul, Tehran}},
         {Mumbai, {Karachi, Delhi, Chennai}},
         {NewYork, {Montreal, Washington, London, Madrid}},
         {Osaka, {Taipei, Tokyo}},
         {Paris, {Algiers, Essen, Madrid, Milan, London}},
         {Riyadh, {Baghdad, Cairo, Karachi}},
         {SanFrancisco, {LosAngeles, Chicago, Tokyo, Manila}},
         {Santiago, {Lima}},
         {SaoPaulo, {Bogota, BuenosAires, Lagos, Madrid}},
         {Seoul, {Beijing, Shanghai, Tokyo}},
         {Shanghai, {Beijing, HongKong, Taipei, Seoul, Tokyo}},
         {StPetersburg, {Essen, Istanbul, Moscow}},
         {Sydney, {Jakarta, Manila, LosAngeles}},
         {Taipei, {Shanghai, HongKong, Osaka, Manila}},
         {Tehran, {Baghdad, Moscow, Karachi, Delhi}},
         {Tokyo, {Seoul, Shanghai, Osaka, SanFrancisco}},
         {Washington, {Atlanta, NewYork, Montreal, Miami}}};

    map<City, Color> Board::colorCity =
        {{City::Algiers, Color::Black},
         {City::Atlanta, Color::Blue},
         {City::Baghdad, Color::Black},
         {City::Bangkok, Color::Red},
         {City::Beijing, Color::Red},
         {City::Bogota, Color::Yellow},
         {City::BuenosAires, Color::Yellow},
         {City::Cairo, Color::Black},
         {City::Chennai, Color::Black},
         {City::Chicago, Color::Blue},
         {City::Delhi, Color::Black},
         {City::Essen, Color::Blue},
         {City::HoChiMinhCity, Color::Red},
         {City::HongKong, Color::Red},
         {City::Istanbul, Color::Black},
         {City::Jakarta, Color::Red},
         {City::Johannesburg, Color::Yellow},
         {City::Karachi, Color::Black},
         {City::Khartoum, Color::Yellow},
         {City::Kinshasa, Color::Yellow},
         {City::Kolkata, Color::Black},
         {City::Lagos, Color::Yellow},
         {City::Lima, Color::Yellow},
         {City::London, Color::Blue},
         {City::LosAngeles, Color::Yellow},
         {City::Madrid, Color::Blue},
         {City::Manila, Color::Red},
         {City::MexicoCity, Color::Yellow},
         {City::Miami, Color::Yellow},
         {City::Milan, Color::Blue},
         {City::Montreal, Color::Blue},
         {City::Moscow, Color::Black},
         {City::Mumbai, Color::Black},
         {City::NewYork, Color::Blue},
         {City::Osaka, Color::Red},
         {City::Paris, Color::Blue},
         {City::Riyadh, Color::Black},
         {City::SanFrancisco, Color::Blue},
         {City::Santiago, Color::Yellow},
         {City::SaoPaulo, Color::Yellow},
         {City::Seoul, Color::Red},
         {City::Shanghai, Color::Red},
         {City::StPetersburg, Color::Blue},
         {City::Sydney, Color::Red},
         {City::Taipei, Color::Red},
         {City::Tehran, Color::Black},
         {City::Tokyo, Color::Red},
         {City::Washington, Color::Blue}};

    int &Board::operator[](City city) { return pandemic[city]; }

    void Board::remove_cures() { discoveredCure.clear(); } //clean all the cures

    void Board::remove_stations() { station.clear(); } //clean all the research stations

    ostream &operator<<(ostream &os, const Board &b) { return os; }

    bool Board::hasDisCure(Color color) { return (discoveredCure.count(color) > 0); } //return true if there is disease cure, else false

    bool Board::hasStation(City c) { return station.count(c) > 0; } //return true if there is reasearch station, else false

    void Board::addDiseaseCure(Color color) { discoveredCure.insert(color); } //add the color to the alreadt diseases

    void Board::putStation(City c) { station.insert(c); } //put new research station

    bool Board::is_clean()
    { //return true if the city is clean, ele false
        for (const auto &cityPandemic : pandemic)
        {
            if (cityPandemic.second != 0)
            {
                return false;
            }
        }
        return true;
    }
}