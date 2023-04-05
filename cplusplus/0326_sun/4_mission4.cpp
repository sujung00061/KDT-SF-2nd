#include <iostream>
#include <vector>
using namespace std;
namespace seoul{
    string num;
    string landmark;
}
namespace busan{
    string num;
    string landmark;
}
using busan::num;
using busan::landmark;

int main(){
    seoul::num="02";
    seoul::landmark="롯데타워";
    busan::num="051";
    busan::landmark="해운대";
    cout<<seoul::num<<" "<<seoul::landmark<<endl;
    cout<<num<<" "<<landmark;
}
