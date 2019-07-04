#ifndef __TROLL_H__
#define __TROLL_H__
#include "pc.h"
class Character;

class Troll: public PC {
public:
    Troll(int x, int y, int hp, double atk, double def, std::string name);
    //void move(Direction dir) override;
    int attack(std::shared_ptr<Character> chr) override;
    void consumePotion(std::shared_ptr<Potion> p) override;
};

#endif 
