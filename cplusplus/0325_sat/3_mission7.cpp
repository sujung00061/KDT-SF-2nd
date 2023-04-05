#include <iostream>
using namespace std;
int main(){
    int i,n,x;
    int sum=0;
    int *arr = new int [x];
    cout<<"학생 수 : ";
    cin>>x;

    for(int i=0;i<x;i++){
        cout<<i+1<<"번 학생의 성적을 입력하세요 : ";
        cin>>arr[i];
    }
    for(int i=0;i<x;i++){
        sum=arr[i]+sum;
    }

    cout<<"성적 평균 : "<<double(sum)/double(x);
    



}
