#ifndef POKER_GAME_PIPS_H
#define POKER_GAME_PIPS_H

#include <ostream>

namespace poker_game {
    class pips {
    public:
        pips(int value);
        friend std::ostream& operator<<(std::ostream& out, const pips& p);
        int get_pips() const;

    private:
        int value_;
    };
}



#endif //POKER_GAME_PIPS_H