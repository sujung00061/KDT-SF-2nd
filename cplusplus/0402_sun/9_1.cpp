#include <iostream>
using namespace std;

class Person{
    static int cnt;
    string name;
public:
    Person(string name){
        this->name=name;
        plusCnt();
    }
    static int getCnt(){
        return cnt;
    }
    void plusCnt(){
        cnt++;
    }
};
int Person :: cnt=0;

int main(){
    Person p("홍길동");
    Person p2("성춘향");
    
    cout<<"인원 : "<<Person::getCnt()<<endl;
}