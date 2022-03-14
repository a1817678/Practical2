#include "player.h"

player::player()=default; //因为虚函数
player::~player(){

}

const std::string &player::getName() const{
    return name;
}

void player::setName(const std::string &name){
    player::name =name;
}