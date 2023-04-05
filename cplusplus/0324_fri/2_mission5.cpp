#include <iostream>
using namespace std;
int main(){
    int i,j,k;
    cout<<"input : ";
    cin>>j;
    cout<<"output : "<<endl;
    for(int i=1;i<=j;i++){
        for(int k=1;k<=i;k++)
            printf("*");
        printf("\n");
    }
}