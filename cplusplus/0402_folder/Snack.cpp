#include <iostream>
#include <vector>
using namespace std;
#include "Snack.h"

Snack::Snack(string x)
{
    this-> x= x;
}
int Snack:: getCnt()
{
    return cnt;
}
void Snack::plusCnt()
{
    cnt++;
}
int Snack ::cnt = 0;
    