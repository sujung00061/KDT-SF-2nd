#include <iostream>
using namespace std;

class Student{
    int num, age;
    string name, school; 
public:
    Student(string name, string school, int age, int num){
        this->name=name;
        this->school=school;
        this->age=age;
        this->num=num;
    }
    void lunch(){
        cout<<"점심은 학식";
    }
};

class Kim :public Student{

public:
    Kim(string name, string school, int age, int num) : Student(name,school,age,num){
    }
    void lunch(){
        cout<<"점심은 김가네 김밥"<<endl;
    }
};
class Baek :public Student{

public:
    Baek(string name, string school, int age, int num) : Student(name,school,age,num){

    }
    void lunch(){
        cout<<"점심은 백종원 피자"<<endl;
    }
};

int main(){
    Baek b=Baek("홍길동","포스코",24,19); 
    Kim k=Kim("홍길동","포스코",24,19);
    b.lunch();
    k.lunch();
}
