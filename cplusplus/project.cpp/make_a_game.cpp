#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
class Character{
    static int P_hp,C_hp;
    int level;
public:
    void Attack(){
        cout<<" ";
    }
    int getC_hp(){
        return C_hp;
    }
    int getP_hp(){
        return P_hp;
    }
    void Get(){
        cout<<"무기를 줍습니다.";
    }
};
class Weapon {
    int attack_level;
    int attack_able;
public:
    Weapon(){
    }
        
};
class Knife : public Weapon{

public:

    Knife():Weapon(){
        
    }

};
class Gun: public Weapon{
public:
    Gun():Weapon(){

    }

};
int Character::C_hp=30;
int Character::P_hp=30;
int main(){
    srand((unsigned int)time(NULL));
    string name;
    int i;
    cout<<"캐릭터 이름 입력 : ";
    cin>>name;
    while(1){
        cout<<"["<<name<<" turn]";
        cout<<"어떤 동작을 하겠습니까? (1. 무기 줍기    2. 공격):";
        cin>>i;




        cout<<"[computer turn]";
        int random=rand()%2+1;
        if(random==1){
        //무기주워용
        }
        else{
        //무기써용
        }






    }

}