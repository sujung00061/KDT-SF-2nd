#include <iostream>
using namespace std;

class Snack
{
protected:
    int price;
    string name, maker;

public:
    Snack(int price, string name, string maker)
    {
        this->name = name;
        this->name = name;
        this->maker = maker;
    }
    virtual void printName(){}
    void print(){
        cout << name <<"입니다."<<endl;
    }
};

class Candy : public Snack
{
    string flavor;

public:
    Candy(string flavor, int price, string name, string maker) : Snack(price, name, maker)
    {
        this->flavor=flavor;
        this->price = price;
        this->name = name;
        this->maker = maker;
    }
    void printName()
    {
        cout << flavor<<" ";
    }
    
};

class Chocolate : public Snack
{
    string shape;

public:
    Chocolate(string shape, int price, string name, string maker) : Snack(price, name, maker)
    {
        this->shape=shape;
        this->price = price;
        this->name = name;
        this->maker = maker;
    }
    void printName()
    {
        cout << shape<<" ";
    }
};

int main()
{
    Snack *snackBasket[4] = {new Candy("딸기맛", 300, "츄파츕스", "chupa chups"), new Candy("과일맛", 300, "알사탕", "??"), new Chocolate("물방울 모양", 3500, "허쉬 키세스", "허쉬"), new Chocolate("네모 모양", 3000, "ABC 초콜렛", "롯데")};
    for (int i = 0; i < 4; i++)
    {
        snackBasket[i]->printName();
        snackBasket[i]->print();
        
    }
}
