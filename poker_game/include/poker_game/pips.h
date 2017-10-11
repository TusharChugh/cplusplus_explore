#ifndef POKER_GAME_PIPS_H
#define POKER_GAME_PIPS_H

#include <ostream>

namespace poker_game {
    class pips {
    public:
        pips(int value);
        int get_pips() const;

        friend inline std::ostream& operator<<(std::ostream& out, const pips& p) {
            return out<<p.get_pips();
        }
    private:
        int value_;
    };
}



#endif //POKER_GAME_PIPS_H