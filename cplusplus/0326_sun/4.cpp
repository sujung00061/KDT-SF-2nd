#include <iostream>
#include <vector> //stl 내 존재
using namespace std;
int main(){

//vector 자동으로 메모리를 할당해주는 배열
//동적 배열과 비슷
    string str="aaa";
    vector<string>v = {"a"};
 // <자료형>
    vector<int>v(5);
// 크기가 5인 배열을 만듦. 모든값 0으로 초기화
    vector<int>v(4,1);
// 크기가 4인 배열을 만듦. 모든값 1로 초기화 
//{1,1,1,1}
    vector<string>v1(5,"aa");

    vector<int> v;
    // v.assign(5,2);
//크기가 5인 배열을 만듦.모든값을 2로 초기화
    v.size(); //벡터v의 사이즈 반환
    for(int i=0;i<6;i++){
        cout<<v[i]<<" "; //out of range  오류 발생해도 잡아주지 않음
        cout<<v.at(i)<<endl; //out of range 오류 발생함.
                            //저거대신 이거쓰기~~~
    }
    //{2,2,2,2,2}

    // v.push_back(6); // 벡터의 제일 마지막에 원소를 추가함 {2,2,2,2,2,6}
    // v.pop_back(); //벡터의 제일 마지막 원소를 빼냄. {2,2,2,2,2}
    // v.begin();//vector의 시작 주소를 반환. 인덱스 0
    // v.insert(v.begin(),8);//(원하는 자리,원소). {8,2,2,2,2,2}
    // v.erase(v.begin(),v.begin()+3);//(시작 자리,끝 자리). {2,2,2}
    // v.clear(); //다 지움. {}

    vector < vector <int> > v2 = {{1, 2}, {3, 4}}; // 이차원 동적 배열
    for (int i = 0; i < v2.size(); i++)
    {
        for (int j = 0; j < v2.at(i).size(); j++)
        {
            cout << v2.at(i).at(j) << " ";
        }
        cout << endl;
    }

    return 0;





}