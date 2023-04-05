#include <iostream>
using namespace std;
int main(){
    int correct[3] = { 1, 8, 5 };
    int user[3];
    int count=0;
    cout<<"1~9사이의 숫자 3개를 입력하세요 : ";
    for(int i=0;i<3;i++){
        cin>>user[i];
    }
    for(int i=0;i<3;i++){
        if (user[i]==1 || user[i]==8 || user[i]==5){
            count++;
        }
    }
    cout<<count<<"개 맞춤!";

        
    

}