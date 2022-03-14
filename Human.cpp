#include "Human.h"

Human::Human() = default;

char Human::Human(){
    while (initialMove!="R" &&initialMove!="S"&&initialMove!="P")
    {
        std::cout <<"Enter Move:";
        std::cin >> initialMove;
    }

    return initialMove;
    
}