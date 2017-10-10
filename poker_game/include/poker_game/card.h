//
// Created by fzff9p on 10/9/17.
//

#ifndef POKER_GAME_CARD_H
#define POKER_GAME_CARD_H

#include "pips.h"
#include <ostream>
#include <iostream>

namespace poker_game {

    enum class suite_type: short {SPADE, HEART, DIAMOND, CLUB};

    class card {
    public:
        card(suite_type suite, poker_game::pips value);
        friend std::ostream& operator<<(std::ostream& out, const poker_game::card& c) {
            out<<c.value_<< static_cast<short>(c.suit_);
            return out;
        }
        suite_type suit() const;
        pips value() const;

    private:
        suite_type suit_;
        pips value_;
    };
}

#endif //POKER_GAME_CARD_H
