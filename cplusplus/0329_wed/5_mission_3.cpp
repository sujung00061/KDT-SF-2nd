#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream in("member.txt");
    string name_i,pw_i,name,pw;

    cout << "이름을 입력하세요." << endl;
    cin>>name_i;

    cout<<"비밀번호를 입력하세요."<<endl;
    cin>>pw_i;

    if(in.is_open()){
        while(in>>name>>pw){ //member.txt에서 name, pw로 읽어냄.
            if(name==name_i &&pw==pw_i){
                cout<<"로그인 성공";
            }
            else{
                cout<<"로그인 실패";
            }
        break;
        }
    }
    else{
        cout<<"CANNOT FOUND ANY FILE. PLEASE CHANGE FILE NAME";
    }
    in.close();
    

}