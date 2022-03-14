#include "player.h"

class Human : public player{
    public:
    Human();

    char makeMove() override;

    private:
    char initialMove ='';

};