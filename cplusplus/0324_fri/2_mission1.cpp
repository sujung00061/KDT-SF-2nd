#include <iostream>
using namespace std;
int main(){
    int i,j;
    cout<<"1~9단 출력"<<endl;
    for(i=1;i<10;i++){
    cout<<"-----"<<i<<"단-----"<<endl;
       for(j=1;j<10;j++){
        cout<<i<<"*"<<j<<"="<<i*j<<endl;        
       }

    }
}