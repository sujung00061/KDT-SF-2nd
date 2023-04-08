//zsh: abort 오류가 계속 뜸.... 인터넷 컴파일러론 잘 돌아가는 것 확인
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand((unsigned int)time(NULL));
    int a[3]={0,}, b[3]={0,},cnt=0, random;
    while (cnt < 6) {
        bool exist = false;
        random = rand() % 9 + 1;
        if(cnt!=0){
            for (int i = 0; i < cnt; i++) {
                if (a[i] == random){
                    exist = true;
                }
            }
        }
        else{
            exist=false;
        }
        if (exist == false){
            a[cnt] = random;
            cnt++;
        }
    }
    cnt=0;
    cout<<"야구 게임"<<endl;
    while (1){
        cout<<"1~9 사이의 숫자 3개를 입력 하시오(이외의 숫자: 종료)"<<endl;
        cin>>b[0]>>b[1]>>b[2];  //사용자에게 입력받기
            int bCnt=0;
            int sCnt=0;
            if((b[0]<1 || b[1]<1 || b[2]<1) ||(b[0]>9 || b[1]>9 || b[2]>9)){
                cout<<"게임을 종료하였습니다.";
                return 0;
            }
            if(b[0]==b[1] || b[0]==b[2] || b[1]==b[2]){
                cout<<"중복된 수입니다."<<endl;
                continue;
            }
            cnt++;
            for (int i=0;i<3;i++){
                for (int j=0;j<3;j++){ //요소가 같은지 체크
                    if(a[i]==b[j]){
                        if(i==j){
                            sCnt++;     //strike 카운트
                        }
                        else{
                            bCnt++;
                        }        // ball 카운트
                    }
                }
            }
            if(sCnt==3){
                cout<<cnt<<"번만에 맞췄습니다!";
                return 0;
            }
            cout<<"Strike : "<<sCnt<<"              Ball: "<<bCnt<<endl;
        
    }
}