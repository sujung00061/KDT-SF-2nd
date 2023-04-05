#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{ //ifstream ->파일의 내용을 가지고 와서 프로그램에 입력할 수 있게
    ifstream file; //파일을 담을 변수 선언
    file.open("hello.txt");//hello.txt 파일 열기

    // string word1, word2;
    string line;

    if (file.is_open()) { // if 파일 열기에 성공했다면
         for (int i = 0; i < 3; i++) {
            file >> word1 >> word2;
            cout << word1 << word2 << endl;
            getline(file, line);
            cout << line << endl;
        } 
        while (getline(file, line)) { //엔터 전까지 읽어서 line에 저장
            cout << line << endl;
        }
    } else cout << "fail\n";

    file.close();

    ofstream file2("bye.txt"); //출력을 파일에 저장
    
    if (!file2.fail()) { //파일이 
        file2 << "Bye world!\n" << "Bye Bye\n";
    }
    else cout << "fail to open file\n";

    file2.close();
}