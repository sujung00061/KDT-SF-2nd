#include <iostream>
using namespace std;
int add(int,int);
int min(int,int);
int mul(int,int);
double divide(int,int);
void even_odd(int);
int main(){
    cout<<add(1,2)<<endl;
    cout<<min(1,2)<<endl;
    cout<<mul(1,2)<<endl;
    cout<<divide(10,3)<<endl;
    // even_odd(10);
}

void even_odd(int i){
    if(i%2==0){
        cout<<"짝수";
    }
    else{
        cout<<"홀수";
    }
}
int add(int i, int j){
    return i+j;
}
int min(int i, int j){
    if(i<j){
        return j-i;
    }
    else{
    return i-j;
    }
}
int mul(int i, int j){
    return i*j;
}
double divide(int i, int j){
    return (double)i / (double)j;
}