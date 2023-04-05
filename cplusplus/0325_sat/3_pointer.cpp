#include <iostream>
using namespace std;
int main(){
    int n=3;
    int n2=5;
    int *p= &n;
    //주소값만 넣을 수 있음. 특정 값 불가.
    // cout<<p<<"    ";
    // cout<<*p<<endl;
    n=10;

    p=&n2;

    // cout<<p<<"    "; //그냥 변수 이름으로 접근하면 주소값을 출력. n의 주소값.
    // cout<<*p<<endl;//포인터를 사용하면, p가 가리키고 있는 주소에 들어간 실제 값을 출력.



    string str="aaa";
    string *str_p=&str;

    // cout<<str_p<<"    ";
    // cout<<*str_p<<endl;

    int &num=n; //num 참조변수
    //n이라는 변수가 있는데, n이라는 변수에 num이라는 별명을 붙인 상황
    // n=num




    cout<<n<<endl;
    cout<<&n<<endl;
    cout<<num<<endl;
    // cout<<*num<<endl;
    cout<<&num<<endl;


}


