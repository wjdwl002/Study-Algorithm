/*
No.1 [사전 문제] 기념품 수집
2023.01.11
*/

/*문제 목표

*/

#include <bits/stdc++.h>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;
#define X first
#define Y second

int T, // 테스트케이스 수
    R, // 여행지의 크기(1<=R)
    C; // 여행지의 크기(C<=20)
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

void sol(int R, int C){
    int sum = 0;
    int city[R][C];
    bool ascii[200] = {false}; 
    queue<pair<int, int>> q;
    
    for(int i=0; i<R; i++){
        string str;
        cin >> str;
        for(int j=0; j<str.length(); j++){
            city[i][j] = str[j];
        }
    }
    
    q.push({0,0});
    while(!q.empty()){
    //     pair<int, int> cur = q.front();
    //     q.pop();
    //     for(int dir = 0; dir < 4; dir++){
    //         int nx = cur.X + dx[dir];
    //         int ny = cur.Y + dy[dir];
    //         if(nx < 0 || nx >= C || ny < 0 || ny >= R) continue;
    //         if(ascii[city[nx][ny]]) continue;
    //         ascii[city[nx][ny]] = true;                
    //         q.push({nx, ny});
    //     }
    }

    // for(bool b : ascii){
    //     if(b) sum++;
    // }

    // cout << sum << endl;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

//initialize
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> R >> C;
        sol(R, C);
    }
}