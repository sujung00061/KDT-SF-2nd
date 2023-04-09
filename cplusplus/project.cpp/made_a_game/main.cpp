#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include "Knife.h"
#include "Gun.h"
#include "Character.h"
using namespace std;

int main(){
    srand((unsigned int)time(NULL));
    Character c = Character();
    c.Name(); // 이름 입력
    c.Act();
}