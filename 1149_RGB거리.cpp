/*
1149 RGB거리
실버1
DP
2023.01.05
*/


#include <bits/stdc++.h>
using namespace std;

/* 문제 목표
모든 집을 칠하는 최솟값을 구하기
- i(2 ≤ i ≤ N-1)번 집의 색은 i-1번, i+1번 집의 색과 같지 않아야 한다.
*/
/* 문제 분석
마지막집을 무슨 색으로 칠하느냐에 따라 답이 달라질것같다. 첫번째 집을 빨, 초 파로 칠하는 경우를 모두 고려해보자.
모든 색상에 대해 기본 점화식은 동일하다. R을 예시로 들어보자 

R[1] = data[1].R;
R[2] = max(data[1].G / data[1].B) + data[2].R
...
R[N] = max(data[N-1].G / data[N-1].B) + data[N].R
*/
int N;
int R[1005], G[1005], B[1005];
struct dataS {
    int R;
    int G;
    int B;
};
dataS d[1005];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;

    for(int i=1; i<=N; i++){
        cin >> d[i].R >> d[i].G >> d[i].B;
    }
    
    R[1] = d[1].R;
    G[1] = d[1].G;
    B[1] = d[1].B;

    for(int i=2; i<=N; i++){
        R[i] = min(G[i-1], B[i-1]) + d[i].R;
        G[i] = min(R[i-1], B[i-1]) + d[i].G;
        B[i] = min(G[i-1], R[i-1]) + d[i].B;
    }

    cout << min(min(R[N], G[N]), B[N]) << endl;
}