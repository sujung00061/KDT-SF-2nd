#pragma once

#ifndef __SNACK_H__
#define __SNACK_H__
#include <iostream>
using std:: string;

class Snack{
protected:
    string x;
    static int cnt;

public:
    Snack(string x);
    static int getCnt();
    void plusCnt();

};

#endif