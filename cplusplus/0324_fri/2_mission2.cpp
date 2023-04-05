#include <iostream>
using namespace std;
int main(){
    int i,j,k;
    k=0;
    cout<<"1부터 n까지의 합 구하기\n"<<endl;
    cout<<"숫자(양의 정수)를 입력하세요 : ";
    cin>>j;
    for(i=1;i<=j;i++){
        k=i+k;
    }
    cout<<"1부터"<<j<<"까지의 합은 : "<<k<<endl;
}