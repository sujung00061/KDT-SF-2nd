// 멤버 : 변수(필드), 메소드들을 통틀어서 멤버

#include <iostream>
using namespace std;

class Person {
public:
	static int static_var;
	string name;
	void sleep() {
		name = "aaaa";
		//static_var = 5;
	}
	static void static_method() {
		//name = "aaaaa"; // 일반 필드이기 때문에 접근 X
		static_var = 10;
		cout << "static_method" << endl;
	}
};

int Person::static_var = 0;

int main() {
	Person::static_var = 5;
	cout << Person::static_var << endl;
	Person::static_method();
	cout << Person::static_var << endl;


	//Person p;
	//p.name = "홍길동";
	//p.static_var = 2;
	//p.sleep();
	//p.static_method();

	//cout << p.static_var << endl;
	//
	//Person p2;
	//p2.name = "성춘향";
	//p2.static_var = 5;

	//cout << p.name << " " << p2.name << endl;
	//cout << p.static_var << " " << p2.static_var << endl;



	return 0;
}