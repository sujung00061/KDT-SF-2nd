#include <iostream>
using namespace std;

class Rectangle{
    int width, height;
public:
    int area(int width, int heigh){
        cout<<"넓이는 : "<<width*heigh;
    }
    int getWid(){
        return width;
    }
    int getHei(){
        return height;
    }
    void setWid(int width){
        this->width=width;
    }
    void setHei(int height){
        this->height=height;
    }
};
int main(){
    int width, height;
    Rectangle r=Rectangle();
    cout<<"사각형의 가로와 세로 길이를 입력해주세요.";
    cin>>width>>height;
    r.setWid(width);
    r.setHei(height);
    r.area(width, height);

}