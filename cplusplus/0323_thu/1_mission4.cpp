#include <iostream>
int main()
{
    int a;
    std::cin >> a;
    if (a % 5 == 0)
    {
        std::cout << a << "는 5의 배수입니다.";
    }
    else
    {
        std::cout << a << "는 5의 배수가 아니네요ㅜㅜ";
    }
}