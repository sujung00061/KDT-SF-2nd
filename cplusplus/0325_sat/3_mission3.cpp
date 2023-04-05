#include <iostream>
using namespace std;
int main(){
    int grade[5]={};
    int sum=0;
    for(int i=0;i<5;i++){
        cout<<i+1<<"번 학생의 성적을 입력하세요 : ";
        cin>>grade[i];
    }
    for(int i=0;i<5;i++){
        sum=grade[i]+sum;
    }

    // sum=grade[0]+grade[1]+grade[2]+grade[3]+grade[4];
    double v=double(sum)/5;
    cout<<"성적 평균 : "<<v;
}