/*
2579 계단 오르기
실버3
DP
2022.12.31
*/

/*문제 목표
- 계단은 한계단씩 or 두계단씩 오를 수 있음
- 연속된 계단 세개를 밟을 수 없다
- 마지막 계단은 밟을 것
    => 총 점수의 최댓값
*/

/*문제 분석
dp[1] = 10
dp[2] = 20
dp[3] = dp[1] + s[3] or dp[0] + s[2] + s[3]
dp[4] = dp[2] + s[4] or dp[1] + s[3] + s[4]
dp[5] = dp[3] + s[5] or dp[2] + s[4] + s[5] 
*/

#include <bits/stdc++.h>
using namespace std;

int N;
int s[305], dp[305];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

//initialize
    cin >> N;
    for(int i=1; i<=N; i++){
        cin >> s[i];
    }
    
    dp[0] = 0;
    dp[1] = s[1];
    dp[2] = s[1] + s[2];

    for(int i=3; i<=N; i++){
        dp[i] = max(dp[i-2] + s[i], dp[i-3] + s[i-1] + s[i]);
    }

    cout << dp[N] << endl;
}