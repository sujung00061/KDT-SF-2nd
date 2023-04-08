#include <iostream>
using namespace std;
int main()
{

    int Cnt, arr[21][21] = {0,},x, y;

    int num;
    cin >> num;
    Cnt = 1;
    x = 1;
    y = (num / 2) + 1;
    arr[x][y] = Cnt; // 초기 1값은 맨 윗줄 중앙에 넣어준다.

    Cnt++;

    while (Cnt <= num * num){
        if ((Cnt - 1) % num == 0){ // 이전에 사용한 Number가 입력한 n의 배수이면 그다음 숫자는 바로 아래에 써준다.
            x++;
            arr[x][y] = Cnt;
            Cnt++;
        }
        else{
            if (x - 1 < 1){
                x = num;
                y++;
                arr[x][y] = Cnt;
                Cnt++;
            }
            else if (y + 1 > num){
                x--;
                y = 1;
                arr[x][y] = Cnt;
                Cnt++;
            }
            else{
                x--;
                y++;
                arr[x][y] = Cnt;
                Cnt++;
            }
        }
    }
    for (x = 1; x <= num; x++){
        for (y = 1; y <= num; y++){

            cout << arr[x][y] << " ";
        }

        cout << endl;
    }

    return 0;
}