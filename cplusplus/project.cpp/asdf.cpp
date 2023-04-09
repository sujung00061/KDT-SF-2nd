#include <iostream>
using namespace std;
class Operator{
protected:
    double num1, num2;
    static int cnt;
public:
    Operator(double num1, double num2){
        this->num1=num1;
        this->num2=num2;        
    }
    static double getCnt(){
        return cnt;
    }
    virtual double Answer(){
        return 0;
    }
    void plusCnt(){
        cnt++;
    }
};
class Add : public Operator{
public:
    Add(double num1, double num2):Operator(num1, num2){
        this->num1=num1;
        this->num2=num2;
    }
    double Answer(){
        plusCnt();
        return num1+num2;
    }
};
class Minus : public Operator{
public:
    Minus(double num1, double num2):Operator(num1, num2){
        this->num1=num1;
        this->num2=num2;
    }
    double Answer(){
        plusCnt();
        return num1-num2;
    }
};
class Multiply : public Operator{
public:
    Multiply(double num1, double num2):Operator(num1, num2){
        this->num1=num1;
        this->num2=num2;
    }
    double Answer(){
        plusCnt();
        return num1*num2;
    }
};
class Divide : public Operator{
public:
    Divide(double num1, double num2):Operator(num1, num2){
        this->num1=num1;
        this->num2=num2;
    }
    double Answer(){
        plusCnt();
        return num1/num2;
    }
};
int Operator :: cnt = 0;

int main(){
    double x,y,answer;
    char a;
    string b;
    cout<<"숫자를 입력해주세요 : ";
    cin>>x;
    while(1){
        cout<<"연산자를 입력해주세요 : ";
        cin>>a;
        cout<<"숫자를 입력해주세요 : ";
        cin>>y;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"결과: ";
        if(a=='+'){
            Operator *o=new Add(x,y);
            cout<<o->Answer()<<endl;
            answer=o->Answer();
            delete o;
        }
        else if(a=='-'){
            Operator *o=new Minus(x,y);
            cout<<o->Answer()<<endl;
            answer=o->Answer();
            delete o;

        }
        else if(a=='*'){
            Operator *o=new Multiply(x,y);
            cout<<o->Answer()<<endl;
            answer=o->Answer();
            delete o;
        }
        else if(a=='/'){
            Operator *o=new Divide(x,y);
            cout<<o->Answer()<<endl;
            answer=o->Answer();
            delete o;
        }
        cout<<"----------------------------------------------------"<<endl;
        while(1){
            cout<<"연산을 계속 진행하시겠습니까?(Y: 계속, AC: 초기화, EXIT: 종료): ";
            cin>>b;
            if(b=="Y" || b=="AC" || b=="EXIT"){
                if(b=="Y"){
                    x=answer;
                    break;
                }
                if(b=="AC"){
                    cout<<"숫자를 입력해주세요 : ";
                    cin>>x;
                    break;
                }
                if(b=="EXIT"){
                    cout<<"총 시도한 횟수: "<<Operator::getCnt();
                    return 0;
                }
            }
            else{
                cout<<"잘못된 입력입니다. 다시 입력해주세요."<<endl;
            }
        }
    }
}