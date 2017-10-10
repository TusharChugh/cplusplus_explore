#include <gtest/gtest.h>
#include <poker_game/card.h>


TEST(LISTINPUTSIZE, LISTOUTPUTSIZE) {
    poker_game::pips pip(3);
    poker_game::card poker_card(poker_game::suite_type::CLUB, pip);
    ASSERT_EQ(poker_card.value().get_pips(), 3);
    ASSERT_EQ(poker_card.suit(), poker_game::suite_type::CLUB);
}