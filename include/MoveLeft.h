//
// Created by Амир Кашапов on 26.02.2024.
//

#ifndef CPPDUNGEON_MOVELEFT_H
#define CPPDUNGEON_MOVELEFT_H
#include "Action.h"
class MoveLeft:public Action{
public:
    void act() override;
};
#endif //CPPDUNGEON_MOVELEFT_H