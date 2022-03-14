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

    