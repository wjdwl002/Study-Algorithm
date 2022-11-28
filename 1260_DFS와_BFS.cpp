/*
1260 DFS와 BFS
실버 II
그래프(DFS, BFS)
2022.11.15
*/

// * 간선은 양방향
// * 정점의 개수 N, 간선의 개수 M, 탐색 시작 정점 번호 V

#include <bits/stdc++.h>
using namespace std;

int N, M, V;
vector<int> adj[1001]; // vector의 배열


void bfs(n){
    int v[1001];
    queue<int> q;

    v[n] = 1; // 시작점 방문 표시
    q.push(n);

    while(!q.empty()){
        for(p in q[n]){
            
        }
    }
}

void dfs(n){
    int v[1005];
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

//initialize
    cin >> N >> M >> V;
    for(int i=0; i<M; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    // 작은 번호부터 순회하기 위해 
    for(int i=1; i<=n; i++)
        sort(adj[i].begin(), adj[i].end());

    bfs(V);
    dfs(V);
}