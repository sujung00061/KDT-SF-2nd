//Gun.cpp
#include "Gun.h"

Gun::Gun() : Weapon()
    {
        attack_level = 10;
        std::cout << "탕! 상대 플레이어에게 명중했습니다." << std::endl;
    }