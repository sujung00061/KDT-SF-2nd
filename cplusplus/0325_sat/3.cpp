#include <iostream>
using namespace std;
int main()
{
    int a;       // 변수의 선언
    int num1= 0; // 변수의 초기화
    string str = " ";
    string fruit[3] = {"apple", "banana", "grape"};
    // 배열-선언할 때 크기가 정해져야 함.
    string fruit1[]={};
    fruit1[0] = "apple";
    fruit1[1] = "banana";
    fruit1[2] = "grape";

    // sizeof() ->변수의 크기를 byte단위로.
    // int->4byte
    // sizeof (num)->12byte
    // sizeof(fruit1)/sizeof(fruit1[0])->배열의 길이를 가져옴
    // 총 길이/자료형의 길이->인수의 개수
    for(int i=0;i<sizeof(fruit1)/sizeof(fruit1[0]);i++)

    for(int j=0;j<3;j++){
        cin>>fruit1[j];
    }

    for(int i=0;i<sizeof(fruit1);i++){
        cout<<fruit1[i]<<endl;
    }

    int num[2][3]={{2,2,2},{1,23,3}};

    string alp[2][4]={{"a","b","c","d"},{"e","f","g","h"}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << alp[i][j]<<" ";
        }
        cout<<endl;
    }

    // for-each
    // for(자료형 변수이름 : 배열){}
    int num2[3]={4,6,9};
    for(int i;i<3;i++){
        cout<<num2[i]<<" ";
        }
    cout<<endl;

    for(auto &arr : alp){
        for(auto &a : arr){
        cout<<a<<" ";            
        }
        cout<<endl;
         }

}