#include "Referee.h"

Referee::Referee()=default;

char refGame::refGame(Human player1, Computer player2)
// returns the outcome for player1:  'W', 'L' or 'T' (Win, Lose, Tie)

switch (player1.makemove())
{
case 'S'/* constant-expression */:
    return 'L'/* code */
case 'R'
    return 'T'
case 'P'
    return 'W'
default:
    break;
}