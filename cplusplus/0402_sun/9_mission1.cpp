#include <iostream>
#include <vector>
using namespace std;

class Snack
{
protected:
    string x;
    static int cnt;

public:
    Snack(string x)
    {
        this-> x= x;
    }
    static int getCnt()
    {
        return cnt;
    }
    void plusCnt()
    {
        cnt++;
    }
    
};

class Candy : public Snack
{
    string flavor;

public:
    Candy(string flavor) : Snack(x)
    {
        this->flavor = flavor;
        plusCnt();
    }
};
class Chocolate : public Snack
{
    string shape;

public:
    Chocolate(string shape) : Snack(x)
    {
        this->shape = shape;
        plusCnt();
    }
};

int Snack ::cnt = 0;

int main()
{
    int x;
    string f, s;
    vector <string> v;
    for (int i = 0; i < 10; i++)
    {
        cout << "과자 바구니에 추가할 간식을 고르시오(1: 사탕, 2: 초콜릿, 0: 종료) :";
        cin >> x;
        if(x == 1)
        {
            cout << "맛을 입력하세요 : ";
            cin >> f;
            Candy c(f);
            v.push_back(f+"맛 사탕");
        }
        else if (x == 2)
        {
            cout << "모양을 입력하세요 : ";
            cin >> s;
            Chocolate c(s);
            v.push_back(s+"모양 초콜릿");
        }
        else if(x==0){
            break;
        }
        else
        {
            cout << "0-2사이의 숫자를 입력하세요 : "<<endl;
        }
        

    };
    cout << "과자 바구니에 담긴 간식의 개수는" << Snack::getCnt() << "개입니다."<<endl;
    cout<<"과자 바구니에 담긴 간식 확인하기!"<<endl;
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }



}