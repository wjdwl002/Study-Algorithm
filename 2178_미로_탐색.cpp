/*
2178 미로 탐색
실버 I
그래프(BFS)
2022.11.15
*/

#include <bits/stdc++.h>
using namespace std;

string inputs[105];
int maze[105][105];
int v[105][105];
int dist[105][105];
int N, M;
int dx[4] = { 1, 0, -1, 0};
int dy[4] = { 0, 1, 0, -1};

void bfs(int x, int y){
    v[x][y] = 1; //방문 표시
    dist[x][y] = 0;
    queue<pair<int, int>> q; //queue 생성
    q.push(make_pair(x, y)); //시작점 넣기

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        // cout << x << ' ' << y << ' ' << dist[x][y] << endl;

        q.pop();

        for(int i=0; i<4; i++){
            int nextX = x + dx[i];
            int nextY = y + dy[i];
            //미로 범위를 벗어나지 않고
            if(nextX >= 0 && nextX < N && nextY >= 0 && nextY < M){ 
                 // 방문한적이 없으면서, 갈수 있는 길인 경우
                if(v[nextX][nextY] != 1 && maze[nextX][nextY] == 1){
                    dist[nextX][nextY] = dist[x][y] + 1;
                    v[nextX][nextY] = 1;
                    q.push(make_pair(nextX, nextY));
                }
            }
        
        }
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

//initialize
    cin >> N >> M;
    for(int i=0; i<N; i++){
        cin >> inputs[i];
    }
    
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            maze[i][j] = inputs[i][j] - '0';
        }
    }

//code
    bfs(0,0);
    cout << dist[N-1][M-1] + 1 << endl;

}