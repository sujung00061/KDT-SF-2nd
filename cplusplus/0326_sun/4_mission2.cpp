#include <iostream>
#include <vector>
using namespace std;
int main(){
    cout<<"사용자가 입력한 숫자 구하기"<<endl;
    int x,sum,count=0;
    vector<int> v;

    while(1){
    cout<<"숫자를 입력하세요 (0:exit) : ";
    cin>>x;
    v.push_back(x);
    if(x==0){
        break;
    }
    count++;
    }

    for(int i=0;i<count;i++){
        sum=v.at(i)+sum;
    }

    cout<<"사용자가 입력한 수의 합은 : "<<sum-1<<endl;
} 
