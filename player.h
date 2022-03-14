#ifndef CMAKE_CLION_CONAN_TEMPLATE_PLAYER_H 
#define CMAKE_CLION_CONAN_TEMPLATE_PLAYER_H

#include <string>
#include <iostream>

class player
{
private:
    std::string name;
    
public:
player();
virtual ~player();
virtual char makeMove()=0 //纯虚函数
const std::string &getName() const:
void setName(const std::string &name);
}

    