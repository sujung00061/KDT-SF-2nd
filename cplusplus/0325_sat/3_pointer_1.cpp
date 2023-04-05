#include <iostream>
using namespace std;
int main() {

// 포인터 : 메모리 주소를 저장하는 변수
// 포인터를 이용하면 동적 메모리 생성 가능
// 포인터가 나오기 전에 배운 변수, 배열-> 정적 메모리 int n; int arr[3];
// 힙 영역 : 동적 메모리가 저장. 할당과 해제를 직접 관리해줘야함.
// 스택 영역 : 정적 메모리가 저장. 빌드할 때 크기가 지정이 되어있어야 함.

int n=3;
int *p=&n;
// ->포인터를 이용하면 동적 메모리를 생성할 수 있는 것 뿐,
// 포인터를 이용한 모든 변수가 동적 메모리는 아님.

int*p=new int; //->동적 메모리생성
delete p;      //->동적 메모리 반납!

int num;
cout<<"크기를 입력하세요 : ";
cin>>num;
//int arr[num];
//->배열 지정되어야 하기 때문에 못씀 vscode에서만 되는듯...?
int *arr=new int [num];
//->동적 배열 선언방법

for(int i=0;i<num;i++){
    arr[i]=i+1;
}
//arr={1,2,3,4,5}
for(int i=0;i<num;i++){
    cout<<arr[i]<<" ";
}

delete[] arr;
//->동적 배열 반납방법


string*str=new string[num];
for(int i=0;i<num;i++){
    str[i]=65+i;
}
for(int i=0;i<num;i++){
    cout<<str[i]<<" ";
}
delete[] str;

// num *num 행렬
int *arr1 = new int[num];   // 1차원 동적 배열
int **arr2 = new int *[num]; // 2차원 동적 배열 {{,},{,},{,}}
// 안에 있는 중괄호 갯수. num=5일경우->{{},{},{},{},{}}
for (int i = 0; i < num; i++)
{
    arr2[i] = new int[num];
    //{{ , , , , },{},{},{},{}}
}
for (int i = 0; i < num; i++)
{
    for (int j = 0; j < num; j++)
    {
        arr2[i][j] = i+1;

    }
}
for (int i = 0; i < num; i++)
{
    for (int j = 0; j < num; j++)
    {
        cout<<arr2[i][j]<<" ";

    }
}
for(int i=0;i<num;i++){
    delete[] arr2[i];
}
delete[] arr2;

}