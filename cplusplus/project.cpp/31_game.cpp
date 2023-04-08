#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
    int x, cnt = 1;
    srand((unsigned int)time(NULL));


    while (cnt <32){ 
            cout << "개수를 입력하세요 : ";
            cin >> x;
            if (x >= 4 || x <= 0){
                cout << "1~3의 수를 입력하세요." << endl;
            }
            if(x < 4 && x > 0){
                cout << "사용자가 부른 숫자!" << endl;
                for (int i = 0; i < x; i++){
                    cout << cnt << endl;
                        if (cnt == 31){
                            cout << "게임종료! 컴퓨터의 승리!";
                            return 0;
                        }
                    cnt++;
                }
                int random = rand() % 3 + 1;
                cout <<"컴퓨터가 부른 숫자!" << endl;
                for (int i = 0; i < random; i++){
                    cout << cnt << endl;
                    if(cnt==31){
                        cout <<"게임종료! 사용자의 승리!";
                        return 0;
                    }
                    cnt++;
                    if(cnt==30){break;}
                }
        }
    }
}
