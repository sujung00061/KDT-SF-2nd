#pragma once

#ifndef __CHOCOLATE_H__
#define __CHOCOLATE_H__
#include "Snack.h"
class Chocolate : public Snack
{
    string shape;

public:
    Chocolate(string shape);
};
#endif