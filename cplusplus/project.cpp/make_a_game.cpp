#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;
class Weapon{
public:
    int attack_level;
};
class Knife : public Weapon{
public:
    Knife() : Weapon()
    {
        attack_level = 5;
        cout << "푹, 상대 플레이어에게 명중했습니다." << endl;
    }
};
class Gun : public Weapon{
public:
    Gun() : Weapon()
    {
        attack_level = 10;
        cout << "탕! 상대 플레이어에게 명중했습니다." << endl;
    }
};
class Character{
public:
    bool weapon = true;
    Weapon w;
    vector<string> v1;
    vector<string> v2;
    static int cnt;
    int P_hp = 30, C_hp = 30;
    string name;
    int a, level;

    void Name(){
        cout << "캐릭터 이름 입력 : ";
        cin >> name;
    }
    int Act(){
        string x="x";
        v1.push_back(x);
        v2.push_back(x);
        while (C_hp>0 && P_hp>0){
            plusCnt();
            weapon = true;
            if (cnt % 2 == 1){
                cout << endl
                     << "[" << name << " turn]" << endl;
                cout << "어떤 동작을 하겠습니까? (1. 무기 줍기    2. 공격):";
                cin >> a;
                if (a == 1){
                    Get();
                }
                else if (a == 2){
                    Attack();
                    if (weapon == true){
                        result();
                    }
                    else{
                        continue;
                    }
                    end();
                }
                
            }
            else{
                weapon = true;
                srand((unsigned int)time(NULL));
                int random = rand() % 2 + 1;
                cout << endl << "[computer turn]" << endl;
                if (random == 1){
                    Get2();
                }
                else{   
                    Attack2();
                    if (weapon == true){
                        result2();
                    }
                    else{
                        continue;
                    }
                    end2();
                }
                
            }
        }
    }
    void Get(){
        while (1){
            cout << "어떤 무기를 줍겠습니까?(1:칼, 2:총):";
            cin >> a;
            if (a == 1){
                for (int i = 0; i < 3; i++){
                    v1.push_back("knife");
                }
                break;
            }
            else if (a == 2){
                v1.push_back("gun");
                break;
            }
            else{
                cout << "잘못된 입력입니다." << endl;
            }
        }
        cout << "무기를 줍습니다."<<endl;
    }
    void Get2(){
        int random = rand() % 2 + 1;
        if (random == 1){
            for (int i = 0; i < 3; i++){
                v2.push_back("knife");
            }
        }
        else{
            v2.push_back("gun");
        }
        cout << "무기를 줍습니다."<<endl;
    }
    void Attack(){
        if(v1.back()=="x"){
            cout << "사용할 무기가 없습니다!" << endl;
            weapon = false;
        }
        else if (v1.back() == "knife"){
            Weapon *w = new Knife();
            level = w->attack_level;
            delete w;
            v1.pop_back();
        }
        else if (v1.back() == "gun"){
            Weapon *w = new Gun();
            level = w->attack_level;
            delete w;
            v1.pop_back();
        }
        else{
            cout << "사용할 무기가 없습니다!" << endl;
            weapon = false;
        }
    }
    void Attack2(){
        if (v2.back() == "knife"){
            Weapon *w = new Knife();
            level = w->attack_level;
            delete w;
            v2.pop_back();
        }
        else if (v2.back() == "gun"){
            Weapon *w = new Gun();
            level = w->attack_level;
            delete w;
            v2.pop_back();
        }
        else if(v2.back() =="x"){
            cout << "사용할 무기가 없습니다!" << endl;
            weapon = false;
        }
    }
    void plusCnt(){
        cnt++;
    }
    void result(){
        
        cout << name << "(이)가 " << "computer를 공격했습니다." << endl;
        C_hp -= level;
        if(C_hp<0){
            cout << "컴퓨터의 hp가 " << level << "만큼 감소합니다." << endl
            << "컴퓨터의 남은 hp: 0" <<endl;
        }
        else{
            cout << "컴퓨터의 hp가 " << level << "만큼 감소합니다." << endl
            << "컴퓨터의 남은 hp: " << C_hp<<endl;
        }
    }
    void result2(){
        cout << "computer가 " << name << "을(를) 공격했습니다." << endl;
        P_hp -= level;
        if(P_hp<0){
            cout << name << "의 "
             << "hp가" << level << "만큼 감소합니다." << endl
             << name << "의 남은 hp: 0" << endl;
        }
        else{cout << name << "의 "
             << "hp가" << level << "만큼 감소합니다." << endl
             << name << "의 남은 hp: " << P_hp << endl;
        }
    }
    int end(){
        if (C_hp == 0){
            cout << endl
                 << "컴퓨터가 쓰러졌습니다. " << name << "승리!";
            return 0;
        }
    }
    int end2(){
        if (P_hp == 0){
            cout << endl
                 << name << "(이)가 쓰러졌습니다. computer 승리!";
            return 0;
        }
    }
};
int Character::cnt = 0;
int main(){
    srand((unsigned int)time(NULL));
    Character c = Character();
    c.Name(); // 이름 입력
    c.Act();
}