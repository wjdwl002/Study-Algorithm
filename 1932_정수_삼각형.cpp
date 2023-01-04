/*
1932 정수 삼각형
실버1
DP
2023.01.04
*/


#include <bits/stdc++.h>
using namespace std;

/* 문제 목표
대각선 왼쪽 or 대각선 오른쪽 아래의 수만 선택해서 내려올때, 최대 경로 구하기
*/

/* 문제 분석
dp[N][k] = t[N][k]
dp[N-1][1] = max(dp[N][1], dp[N][2]) + t[N-1][1]
dp[N-1][2] = max(dp[N][2], dp[N][3]) + t[N-1][2]
...
dp[i][j] = max(dp[i+1][j], dp[i+1][j+1]) + t[i][j]

*/
int N;
int t[501][501], dp[501][501];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;

    for(int i=1; i<=N; i++){
        for(int j=1; j<=i; j++)
            cin >> t[i][j];
    }

    for(int i=1; i<=N; i++){
        dp[N][i] = t[N][i]; // 마지막 줄
    }

    for(int i=N-1; i>=1; i--){
        for(int j=1; j<=i; j++){
            dp[i][j] = max(dp[i+1][j], dp[i+1][j+1]) + t[i][j];
            // cout << i << " " << j << " " << dp[i][j] << endl;
        }
    }
    cout << dp[1][1] << endl;

}