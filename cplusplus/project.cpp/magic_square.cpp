#include <iostream>

using namespace std;

int main(){
    int num;
    cout<<"마방진의 행 혹은 열의 수를 자연수로 입력하세요 : ";
    cin>>num;
    int arr[100][100] = {0,};

    int cnt=0;
    int x=1;
    int y=(num/2)+1;

    while(cnt<=num*num){
        cnt++;
        arr[x][y]=cnt;
        if((cnt)%num==0){ //전 cnt가 num의 배수이면 아래 칸
            x++;
            arr[x][y]=cnt;
        }
        else{
            if(x-1<1){ // 맨 끝일때
                x=num;
                y++;
                arr[x][y]=cnt;
            }
            else if(y+1>num){ //맨 끝일 때
                x--, y=1;
                arr[x][y]=cnt;
            }
            else{
            x--, y++;
            }
        }
    }
    for (int i = 1; i <= num; i++) { //배열 출력
        for (int j = 1; j <= num; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}



/*
1. 1은 첫 행의 가운데에 위치한다. 
2. 우상단으로 갈 수록 숫자가 1씩 늘어난다.
3. 우상단으로 이동하는 도중 이미 칸이 채워져있으면 바로 아래 칸에 다음 숫자가 채워진다.
4. 첫번째 행에서 우상단으로 이동할 때는 마지막 행의 다음 열로 이동한다.
5. 마지막 열에서 우상단으로 이동할 때엔 첫번째 열의 이전 행으로 이동한다.
6. 첫번째 행의 마지막 열에서는 우상단으로 이동하는 것이 아니라 바로 아래칸으로 이동
*/

