/*
2748 피보나치 수 2
브론즈1
DP
2023.01.09
*/


#include <bits/stdc++.h>
using namespace std;

int N;
long long int dp[91];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;

    dp[0] = 0;
    dp[1] = 1;

    for(int i=2; i<=N; i++){
        dp[i] = dp[i-2] + dp[i-1];
    }

    cout << dp[N] << endl;
}