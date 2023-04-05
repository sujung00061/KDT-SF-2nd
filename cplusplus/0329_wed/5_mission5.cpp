// 더 봐보기...

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream in("member.txt");
    string name_i, pw_i, name, pw, num_i, num, str;

    cout << "이름을 입력하세요.";
    cin >> name_i;

    cout << "비밀번호를 입력하세요.";
    cin >> pw_i;

    bool login = false;

    if (in.is_open())
    {
        while (in >> name >> pw)
        { // member.txt에서 name, pw로 읽어냄.
            if (name == name_i && pw == pw_i)
            {
                login = true;
                break;
            }
        }
        if (login)
        {
            ifstream member_tel_r("member_tel.txt");
            string member_tel_tmp = "";
            bool m = false;
            cout << "로그인 성공" << endl
                 << "전화번호를 입력해주세요 : ";
            cin >> num_i;
            if (member_tel_r.is_open())
            {
                while (member_tel_r >> name >> num)
                {
                    str = name + " ";
                    if (name == name_i)
                    {
                        m = true;
                        str += num_i;
                    }
                    else
                    {
                        str += num;
                    }
                    member_tel_tmp += str + "\n";
                }
            }
            member_tel_r.close();
            ofstream member_tel_w;
            if (m)
            {
                member_tel_w.open("member_tel.txt");
                member_tel_w << member_tel_tmp;
            }
            else
            {
                member_tel_w.open("member_tel.txt");
                if (member_tel_w.is_open())
                {
                    member_tel_w << name_i << " " << num_i << endl;
                }
            }
            member_tel_w.close();
        }
        else
        {
            cout << "로그인 실패";
        }
    }

    else
    {
        cout << "CANNOT FOUND ANY FILE. PLEASE CHANGE FILE NAME";
    }
    in.close();
}