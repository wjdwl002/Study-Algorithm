/*
11659 구간 합 구하기 4
실버3
부분합
2023.2.1
*/


#include <bits/stdc++.h>
using namespace std;

/* 문제 목표
수 N개가 주어졌을 때, i번째 수부터 j번째 수까지 합을 구하라
*/

/* 문제 분석

*/
int N, M;
int* dp;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;

    dp = new int[M+1];
    dp[0] = 0;
    for(int i=1; i<=N; i++){
        int n; cin >> n;
        dp[i] = dp[i-1] + n;
    }
    
    for(int i=0; i<M; i++){
        int n, m;
        cin >> n >> m;
        cout << dp[m] - dp[n-1] << '\n';
    }
}