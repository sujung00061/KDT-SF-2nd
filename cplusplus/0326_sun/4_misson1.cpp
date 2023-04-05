#include <iostream>
#include <vector>
using namespace std;
int main(){
        int x, y, count=1;

    cout << "x를 입력하세요 : ";
    cin >> x;
    cout << "y를 입력하세요 : ";
    cin >> y;
    if (x <= 0 || y <= 0)
    {
        cout << "x와y 모두 양수를 입력해주세요.";
        cout << "x를 입력하세요 : ";
        cin >> x;
        cout << "y를 입력하세요 : ";
        cin >> y;
    }
    vector < vector <int> > v(x,vector<int>(y));
    for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                v.at(i).at(j)=count++;
            }
        }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << v.at(i).at(j) << " ";
        }
        cout << endl;
    }
}