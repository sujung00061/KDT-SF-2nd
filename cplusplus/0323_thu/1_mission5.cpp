#include <iostream>
int main()
{
    int a, b;
    char c;

    std::cout << "연산할 정수 두 개를 입력해 주세요.";
    std::cin >> a >> b;
    std::cout << "연산자를 입력해주세요. (+ - * /)";
    std::cin >> c;
    if (c == '+')
    {
        std::cout << a << "+" << b << "의 값은 " << a + b << "입니다.";
    }
    else if (c == '-')
    {
        std::cout << a << "-" << b << "의 값은 " << a - b << "입니다.";
    }
    if (c == '*')
    {
        std::cout << a << "*" << b << "의 값은 " << a * b << "입니다.";
    }
    if (c == '/')
    {
        std::cout << a << "/" << b << "의 값은 몫"<< a / b << ",나머지는 "<<a%b<<"입니다.";
    }
}