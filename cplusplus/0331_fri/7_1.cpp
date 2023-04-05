#include <iostream>
using namespace std;

class Person
{
    int age = 12;
    string name;

public:
    Person(int age1, string name1)
    {
        this->age = age1;
        this->name = name;
    }
    void sleep()
    {
        cout << "자기" << endl;
    }
    int overriding_test(int num)
    {
        return num;
    }
    int getAge()
    {
        return age;
    }
};


class Student : public Person
{
    string stu_id;

public:
    Student(int age, string name, string stu_id) : Person(age, name)
    {
        this->stu_id = stu_id;
    };
    // 메소드 오버라이딩?? x, 그냥 student의 메소드
    void study()
    {
        cout << "공부하기" << endl;
    }
    // 메소드 오버라이딩 (=덮어쓰기))
    void sleep()
    {
        cout << "10시에 자기" << endl;
    }
    // 메소드 오버라이딩
    // int overriding_test(int num)
    // {
    //     return num + getAge();
    // }

    // 함수(메소드)의 원형이 같다. 함수 이름. 매개변수 종류, 개수까지
};
int main()
{
    Student s = Student(99, "홍길동", "1111");
    s.sleep();
    cout << s.overriding_test(10);
}