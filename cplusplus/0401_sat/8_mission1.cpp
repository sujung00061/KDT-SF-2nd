#include <iostream>
using namespace std;
class Shape{
protected:
    virtual void draw() = 0;

};

class Circle :public Shape{
public:
    void draw(){
        cout<<"Circle"<<endl;
        };

};
class Rect :public Shape{
public:
    void draw(){
        cout<<"Rectangle"<<endl;
        };

};
class Tria :public Shape{
public:
    void draw(){
        cout<<"Triangle"<<endl;
        };
};
int main(){
    Circle c=Circle();
    Rect r=Rect();
    Tria t=Tria();
    c.draw();
    r.draw();
    t.draw();
}