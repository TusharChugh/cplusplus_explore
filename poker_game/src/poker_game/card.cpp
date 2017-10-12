#include <poker_game/card.h>

poker_game::card::card(): suit_(poker_game::suite_type::SPADE), value_(1) {}

poker_game::card::card(suite_type suite, poker_game::pips value): suit_(suite), value_(value) {}

poker_game::suite_type poker_game::card::suit() const{
    return suit_;
}

poker_game::pips poker_game::card::value() const {
    return value_;
}
