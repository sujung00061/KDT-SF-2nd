#include <iostream>
using namespace std;
class Character
{
public:
    int level, item_num, x = 1;
    string name;
    void levelUp()
    {
        level++;
        cout<<"level up!"<<endl;
        cout<<"현재 레벨 : "<<level<<endl;
    }
    void itemUp()
    {
        item_num++;
        cout<<"아이템을 얻었습니다."<<endl;
        cout<<"현재 아이템 수 : "<<item_num<<endl;
    }
    void itemDown()
    {
        item_num--;
        cout<<"아이템을 사용했습니다."<<endl;
        cout<<"현재 아이템 수 : "<<item_num<<endl;
    }
};

int main()
{

    Character c = Character();
    cout << "이름을 입력해주세요 : ";
    cin >> c.name;
    cout << c.name << " 캐릭터가 생성되었습니다." << endl;
    while (c.x != 0)
    {
        cout << "어떤 동작을 실행하시겠습니까? (0:종료) ";
        cin >> c.x;
        if (c.x == 1)
        {
            cout << "새 이름을 입력해주세요: ";
            cin >> c.name;
        }
        else if (c.x == 2)
        {
            c.levelUp();
        }
        else if (c.x == 3)
        {
            c.itemUp();
        }
        else if (c.x == 4)
        {
            c.itemDown();
        }
        else if (c.x == 5)
        {
            cout << "name : "<<c.name << endl<<"level : " << c.level <<endl<<"item : " << c.item_num << endl;
        }
    }
}