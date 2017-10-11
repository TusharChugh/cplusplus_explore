#include "poker_game/pips.h"
#include <assert.h>

poker_game::pips::pips(int value): value_(value) {
    assert(value_ > 0 && value_ <= 13);
}

int poker_game::pips::get_pips() const{
    return value_;
}

