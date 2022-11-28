/*
1520 내리막길
골드3
DP or Graph
2022.11.20
*/

#include <bits/stdc++.h>
using namespace std;
#define x first
#define y second

int N, M;
int mapHeight[505][505];
int mapVis[505][505];
int dx[4] = { 1, 0, -1, 0};
int dy[4] = { 0, 1, 0, -1};

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int result = 0;
    stack<pair<int><int>> S;

//initialize
    cin >> M >> N;
    for(int i=0; i<M; i++){
        for(int i=0; i<N; i++){
            cin >> mapHeight[M][N];
            mapVis[M][N] = 0;
        }
    }

    bool arrived = false;
    int x = 0;
    int y = 0;
    mapVis[0][0] = 1;
    s.push({0,0});
    while(!s.empty()){
        
    }
}