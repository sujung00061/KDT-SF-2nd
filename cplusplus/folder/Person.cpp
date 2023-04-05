// Person.cpp

#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;
#include "Person.h"

Person::Person(string name) {
	this->name = name;
	plusCnt();
}

int Person::getCnt() {
	return cnt;
}

void Person::plusCnt() {
	cnt++;
}

int Person::cnt = 0;