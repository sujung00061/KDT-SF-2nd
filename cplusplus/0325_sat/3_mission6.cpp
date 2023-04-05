#include <iostream>
using namespace std;
int main()
{
    int x, y, count=1;

    cout << "x를 입력하세요 : ";
    cin >> x;
    cout << "y를 입력하세요 : ";
    cin >> y;
    if (x <= 0 || y <= 0)
    {
        cout << "x와y 모두 양수를 입력해주세요.";
        cout << "x를 입력하세요 : ";
        cin >> x;
        cout << "y를 입력하세요 : ";
        cin >> y;
    }



    int **arr = new int *[x]; //이차원 동적 배열 생성
    for (int i = 0; i < x*y; i++)
    {
        arr[i] = new int[x*y];
    }
    for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                arr[i][j] =count++;
            }
        }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }
}