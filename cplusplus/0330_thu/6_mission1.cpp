#include <iostream>
using namespace std;

class Rectangle{
    int width, height;
public:
    int area(int width, int heigh){
        cout<<"넓이는 : "<<width*heigh;
    }
};
int main(){
    int x,y;
    Rectangle r=Rectangle();
    cout<<"사각형의 가로와 세로 길이를 입력해주세요.";
    cin>>x>>y;
    r.area(x,y);

}