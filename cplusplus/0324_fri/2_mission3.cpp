#include <iostream>
using namespace std;
int main(){
    int x,y;
    x=1;
    cout<<"1~9단 출력"<<endl;
    while(x<=9){
        y=1;
        while(y<=9){
            cout<<x<<"*"<<y<<"="<<x*y<<endl;
            y++;
        }x++;
    }

    int i,j,k;
    k=0;
    i=0;
    cout<<"1부터 n까지의 합 구하기\n"<<endl;
    cout<<"숫자(양의 정수)를 입력하세요 : ";
    cin>>j;
    while(1){
        i++;
        k=i+k;
        if(i==j){
            break;
        }
    }
    cout<<"1부터"<<j<<"까지의 합은 : "<<k<<endl;
}