#include <iostream>
using namespace std;
int main(){
    int i,j,k;
    j=0;
    cout<<"사용자가 입력한 숫자 더하기"<<endl;
    while(1){
    cout<<"숫자를 입력하세요(0:exit) : ";
    cin>>i;
    j=i+j;
    if(i==0){
        break;
    }
    }

cout<<"사용자가 입력한 수의 합은 : "<<j;
}