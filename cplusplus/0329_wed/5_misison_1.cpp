#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ifstream infile("hello.txt"); //파일 가져오기
    ofstream outfile("output.txt"); // 출력을 파일에 저장
    string line;
    vector<string> v1;

    if (infile.is_open() && outfile.is_open()) { //두 파일 열기에 성공했다면
        while (getline(infile, line)) { //string line에 hello 텍스트 저장
            v1.push_back(line);//벡터에 string line 저장
        }

        for (int i = v1.size() - 1; i >= 0; i--) { //거꾸로 출력, //왜 size()-1이지?
            outfile << v1[i] << endl;
        }

        infile.close(); //1파일 닫기
        outfile.close();//2파일 닫기
    }
    else cout << "파일 없음\n";
}
