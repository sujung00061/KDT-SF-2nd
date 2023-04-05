#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
    int x, cnt = 1;
    srand((unsigned int)time(NULL));


    while (cnt <32){ 
        bool is_end = false;

            cout << "개수를 입력하세요 : ";
            cin >> x;
            cout << "사용자가 부른 숫자!" << endl;
            if (x >= 4 || x <= 0){
                cout << "1~3의 수를 입력하세요." << endl;
            }
            else if(x < 4 && x > 0){
                for (int i = 0; i < x; i++){
                    cout << cnt << endl;
                        if (cnt == 31){
                            cout << "게임종료! 컴퓨터의 승리!";
                            return 0;
                        }
                    cnt++;
                }
            is_end = true; 
            }
        if (is_end == true){
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


//문제점 1: 사용자가 입력하는 수가 31이 넘어가게 되면 컴퓨터가 31을 한번 더 출력하고 사용자의 승리로 뜨게됨
//2: 컴퓨터의 수가 30으로 끝나게 되면 승패를 나타내는 문구가 나오지 않음.