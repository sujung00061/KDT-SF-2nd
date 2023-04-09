//Knife.cpp
#include "Knife.h"

Knife::Knife() : Weapon()
    {
        attack_level = 5;
        std::cout << "푹, 상대 플레이어에게 명중했습니다." << std::endl;
    }