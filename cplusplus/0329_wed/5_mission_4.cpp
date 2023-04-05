#include <iostream>
using namespace std;

struct position
{
    double x;
    double y;
};

int main()
{
    position p;
    int width,length,heigh;
    cout<<"가로, 세로를 입력하세요 : ";
    cin>>p.x>>p.y;
    p={p.x, p.y};

    cout << "넓이 : "<<(p.x)*(p.y);
}