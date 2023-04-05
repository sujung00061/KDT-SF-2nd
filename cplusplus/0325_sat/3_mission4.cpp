#include <iostream>
using namespace std;
int main()
{
    double sum1=0,sum2=0;
    int grade[3][2] = {};
    for (int j = 0; j < 3; j++)
    {
        cout<<"학생"<<j+1<<" : ";
        for (int i = 0; i < 2; i++)
        {
            cin >> grade[j][i];
        }
    }
    for (int i = 0; i < 3; i++){
        sum1+=grade[i][0];
    }
    for (int i = 0; i < 3; i++){
        sum2+=grade[i][1];
    }

cout<<"국어 평균 : "<<sum1/3<<endl;
cout<<"수학 평균 : "<<sum2/3;
}