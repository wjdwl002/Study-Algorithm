/*
1932 정수 삼각형
실버1
DP
2023.01.02
*/


#include <bits/stdc++.h>
using namespace std;

/* 문제 목표
대각선 왼쪽 or 대각선 오른쪽 아래의 수만 선택해서 내려올때, 최대 경로 구하기
*/

/* 문제 분석
dp[1] = t[1][1]
dp[2] = t[1][1] + t[2][1] 
     or t[1][1] + t[2][2]
dp[3] = t[1][1] + t[2][1] + t[3][1] 
     or t[1][1] + t[2][1] + t[3][2]
     or t[1][1] + t[2][2] + t[3][2]
     or t[1][1] + t[2][2] + t[3][3]
dp[4] = t[1][1] + t[2][1] + t[3][1] + t[4][1]
     or t[1][1] + t[2][1] + t[3][1] + t[4][2] ..

dp[n][k] = dp[n-1][k] + t[n][k] or dp[n-1][k] + t[n][k+1] (k: 1 ~ n-1)
*/
int N;
int t[501][501], dp[501][501], dp2[501];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;

    for(int i=1; i<=N; i++){
        for(int j=1; j<=i; j++)
            cin >> t[i][j];
    }

    dp[1][1] = t[1][1];
    for(int i=2; i<=N; i++){
        dp[i][0] = 0;
        for(int j=1; j<=i; j++){
            dp[i][j] = (dp[i-1][j]+t[i][j], dp[i-1][j]+t[i][j+1]);
            dp[i][0] = max(dp[i][0], dp[i][j]);
        }
        cout << i << " " << dp[i][0] << endl;
    }


}