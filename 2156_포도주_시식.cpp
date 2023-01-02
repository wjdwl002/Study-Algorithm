/*
2156 포도주 시식
실버1
DP
2023.01.01
*/


#include <bits/stdc++.h>
using namespace std;

/* 문제 목표
최대로 마실 수 있는 포도주의 양
- 한 잔의 포도주는 한번에 다 마셔야함
- 연속으로 있는 3잔을 마실 수 없음
*/

/* 문제 분석
dp[1] = d[1]
dp[2] = dp[1] + d[2]
dp[3] = dp[1] + d[3] / dp[2]
dp[4] = dp[2] + d[4] / dp[1] + d[3] + d[4] / dp[3] 
dp[5] = dp[3] + d[5] / dp[2] + d[4] + d[5] / dp[4]
dp[n] = dp[n-2] + d[n] / dp[n-3] + d[n-1] + d[n] / dp[n-1] 
*/
int N;
int drinks[10005], dp[10005];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;

    for(int i=1; i<=N; i++){
        cin >> drinks[i];
    }

    dp[1] = drinks[1];
    dp[2] = drinks[1] + drinks[2];
    dp[3] = max(drinks[2]+drinks[3], max(drinks[1]+drinks[3], dp[2]));

    for(int i=4; i<=N; i++){
        dp[i] = max(max(dp[i-2] + drinks[i], dp[i-3] + drinks[i-1] + drinks[i]), dp[i-1]);
    }

    cout << dp[N] << endl;
}