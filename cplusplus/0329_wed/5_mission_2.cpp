#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream out("member.txt");
    string out_s;
    cout<<"3명의 회원에 대한 이름 비밀번호를 순차적으로 입력하세요."<<endl;
    for(int i=1;i<4;i++){
        cout<<i<<"번째 : ";
        getline(cin,out_s);
        if(out.is_open()){
            out<<out_s<<endl;
        }
    }
    out.close();

    //파일 읽기
    ifstream in("member.txt");
    string in_s;
    if(in.is_open()){
        while(getline(in,in_s)){
            cout<<in_s<<endl;
        }
    }
    in.close();

    
}