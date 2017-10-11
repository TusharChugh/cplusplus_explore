#include <iostream>
#include <poker_game/pips.h>
#include <poker_game/card.h>

int main(int argc, char** argv) {
    poker_game::pips pip(3);
    poker_game::card poker_card(poker_game::suite_type::CLUB, pip);

    std::cout<<"card = "<<poker_card;
    return 0;
}