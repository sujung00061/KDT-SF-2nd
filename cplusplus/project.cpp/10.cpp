#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand((unsigned int)time(NULL));
    int a[6];
    int num = 0;
    int cnt = 0;
    while (cnt < 6)
    {
        bool exist = false;
        num = rand() % 45 + 1;
        for (int i = 0; i < cnt; i++)
        {
            if (a[i] == num)
            {
                exist = true;
            }
        }
        if (exist == false)
        {
            a[cnt] = num;
            cnt++;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
}