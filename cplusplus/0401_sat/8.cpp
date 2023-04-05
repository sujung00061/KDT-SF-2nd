#include <iostream>
using namespace std;
class Person //추상클래스
{
public:
    virtual void eat() = 0;
    virtual void sleep() = 0;
    // 순수 가상함수
};
//추상클래스를 상속받는 자식 클래스는 추상 메소드를 "구현해야만 한다."
//구현하지 않으면 상속이 안됨.
class Student :public Person{
    public:
    void test(){
        cout<<"함수입니다."<<endl;
    }
    void eat(){
        cout<<"냠";
    }
    void sleep(){
        cout<<"쿨";
    }

};

int main(){
    Student s=Student();
    s.sleep();
}
