#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

int main()
{
    vector<string> a;
    string x;
    a.clear();                     // 벡터 초기화
    time_t startTime = time(NULL); // 시작시간
    while (1)
    {
        time_t now = time(NULL); // 현재시간
        if (now - startTime < 30)
        { // 30초 이내라면 실행
            cout << "airplane";
            for (int i = 0; i < a.size(); i++)
            { // 벡터 출력
                cout << " -> " << a[i];
            }
            cout << endl;
            cout << "다음 단어를 입력하세요 : ";
            cin >> x;

            time_t now = time(NULL); // 현재시간
            if (now - startTime < 30)
            {
                if (a.empty())
                { // 처음 입력일 시
                    if (x[0] == 101)
                    { // 입력한 글자가 e로 시작할 때
                        a.push_back(x);
                        cout << endl;
                    }
                    else //e로 시작하지 않을 때
                    {
                        cout << "잘못된 입력입니다." << endl
                             << endl;
                    }
                }
                else //벡터 요소가 존재할 때
                {
                    if (find(a.begin(), a.end(), x) == a.end()) //벡터 내 입력한 단어가 존재하지 않을 때
                    {
                        string last = a.back();
                        if (x[0] == last[last.size() - 1]) //입력한 글자의 첫 알파벳이 벡터 마지막 요소의 마지막 알파벳과 같을 때
                        {
                            a.push_back(x);//벡터에 추가
                            cout << endl;
                        }
                        else
                        {
                            cout << "잘못된 입력입니다." << endl
                                 << endl;
                        }
                    }
                    else //벡터 내 입력한 단어가 존재할 때
                    {
                        cout << "중복된 단어입니다." << endl
                             << endl;
                    }
                }
            }
        }
        else
        {
            cout << "타임 오버!" << endl
                 << endl
                 << "게임 종료!" << endl
                 << "총 입력한 단어 수: " << a.size();
            return 0;
        }
    }
}
