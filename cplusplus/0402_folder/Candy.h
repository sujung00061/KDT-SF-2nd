#pragma once

#ifndef __CANDY_H__
#define __CANDY_H__
#include "Snack.h"

class Candy : public Snack {
    string flavor;
public:
    Candy(string flavor);
};
#endif