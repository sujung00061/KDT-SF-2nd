#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){

    srand((unsigned int)time(NULL));
    int a[6];
    int b[6];
    fill_n(b,6,NULL); //입력받을 배열 NULL로 초기화
    int num = 0;
    int cnt = 0;
    while (cnt < 6) { //6번이 채워질 동안
        bool exist = false;
        num = rand() % 25 + 1;
        for (int i = 0; i < cnt; i++) {
            if (a[i] == num) {
                exist = true;
            }
        }
        if (exist == false) {
            a[cnt] = num;
            cnt++;
        }
    }
    cnt=0;
    int x;
    cout<<"순서는 1~25까지의 숫자만 입력할 수 있습니다."<<endl;
    while(cnt<6){
        cout<<cnt+1<<"번째 번호를 입력하세요 : ";
        cin>>x;
        if(cnt==0){ // 첫번째 입력일 때
            
            if(x<26 && x>0) {
                b[cnt]=x;
                cnt++;
            }
            else {
            cout<<"잘못된 숫자입니다. 다시 입력해주세요."<<endl;
            }
        }
        else{ //첫번째 입력이 아닐 때
            if(find(begin(b), end(b), x) == end(b)){ //중복 없을 시
                if(x<26 && x>0) {
                    b[cnt]=x;
                    cnt++;
                }
                else {
                cout<<"잘못된 숫자입니다. 다시 입력해주세요."<<endl;
                }
            }
            else{
                cout<<"이미 입력된 숫자입니다."<<endl;
            }
        }
    }
    cout<<"---------------------------"<<endl
        <<"당첨번호 공개!"<<endl;
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<"1~7등까지의 결과가 나올 수 있습니다."<<endl;
    cnt=7;
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(a[i]==b[j]){
                cnt--;
            }
        }
    }
    cout<<"결과 : "<<cnt<<"등입니다!";


}
