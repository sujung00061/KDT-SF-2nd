#include <iostream>
int main()
{
    int a;
    std::cout << "나이를 입력하세요.";
    std::cin >> a;

    if (a < 8)
    {
        std::cout << "유아";
    }
    else if (a > 7 && a < 14)
    {
        std::cout << "초등학생";
    }
    else if (a > 13 && a < 17)
    {
        std::cout << "중학생";
    }
    else if (a > 16 && a < 20)
    {
        std::cout << "고등학생";
    }
    else if (a > 19 && a < 200)
    {
        std::cout << "성인";
    }
    else if (a > 199)
    {
        std::cout << "나이가 너무 많습니다..!";
    }
}