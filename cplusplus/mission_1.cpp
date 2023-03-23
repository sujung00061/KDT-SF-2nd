#include <iostream>
int main()
{
    std::string a;
    int b;
    std::cout<<"이름을 입력하세요.";
    std::cin >> a;
    std::cout<<"나이를 입력하세요.";
    std::cin >>b;

    std::cout<<"안녕하세요!"<<a<<"님("<<b<<"세)";


}