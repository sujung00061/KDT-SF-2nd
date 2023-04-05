#include <iostream>
#include <vector>
using namespace std;
int main(){
    string str;
    cout << "입력예시 : ";
    getline(cin, str);
     vector<char> v;
    int i;
    for (int j=0; j<str.length(); j++)
    {
        if (str[j] != ' ')
        {
            for (int i=0; i<v.size();i++)
            {
                //if (v.at(i)==s) break;
                if (v.at(i)==str[j]) break;
            }
            if(i==v.size())
            {
                //v.push_back(s);
                v.push_back(str[j]);
            }
        }
    }
    cout << "출력예시 : "<< v.size() << " 개(";
    for (i=0; i<v.size(); i++)
    {
        cout << v.at(j);
        if (i != v.size()-1)
            cout << ",";
    }
    cout << ")";
}