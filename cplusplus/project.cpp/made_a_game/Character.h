//Character.h
#pragma once 

#ifndef __CHARACTER_H__
#define __CHARACTER_H__

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;




class Character{
    bool weapon = true;
    vector<string> v1;
    vector<string> v2;
    static int cnt;
    int P_hp = 30, C_hp = 30;
    string name;
    int a, level;
public:
    void Name();
    int Act();
    void Get();
    void Get2();
    void Attack();
    void Attack2();
    void plusCnt();
    void result();
    void result2();
    int end();
    int end2();
};



#endif