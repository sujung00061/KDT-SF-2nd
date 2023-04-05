#include <iostream>
int main()
{
    std::string a;
    std::cout << "이름을 입력하세요.";
    std::cin >> a;

    if (a == "홍길동")
    {
        std::cout << "남자";
    }
    else if (a == "성춘향")
    {
        std::cout << "여자";
    }
    else
    {
        std::cout << "모르겠어요.";
    }
}