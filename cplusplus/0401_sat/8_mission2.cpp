#include <iostream>
using namespace std;

class Snack
{
protected:
    int price;
    string name, company;
    string x;

public:
    Snack(string x, int price, string name, string company)
    {
        cout<< x <<endl;
    }
};

class Candy : public Snack
{
    string taste;

public:
    Candy(string taste, int price, string name, string company) : Snack(x, price, name, company)
    {
        this->taste = x;
        this->price = price;
        this->name = name;
        this->company = company;
    }
};

class Chocolate : public Snack
{
    string shape;

public:
    Chocolate(string shape, int price, string name, string company) : Snack(x, price, name, company)
    {
        this->shape = x;
        this->price = price;
        this->name = name;
        this->company = company;
    }
};

int main()
{
    Snack snackBasket[4] = {Candy("딸기맛", 300, "츄파츕스", "chupa chups"), Candy("과일맛", 300, "알사탕", "??"),Chocolate("물방울", 3500, "허쉬 키세스", "허쉬"), Chocolate("네모", 3000, "ABC 초콜렛", "롯데")};

    for (int i = 0; i < 4; i++)
    {
        snackBasket[i];
    }
}
