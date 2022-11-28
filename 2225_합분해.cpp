/*
2225 합분해
골드 5
DP
2022.11.24
*/

#include <bits/stdc++.h>
using namespace std;

#define mod 1000000000;

int N, K;
long long dp[201][201];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

//initialize
    cin >> N >> K;
    //dp[K][N]
    for(int n=0; n<=N; n++){
        //1개로 n을 만들 수 있는 경우의 수는 항상 1이므로 1로 초기화
        dp[1][n] = 1;
    }

    for(int n=0; n<=N; n++){
        for(int k=2; k<=K; k++){
            for(int D=0; D<=n; D++)
                dp[k][n] += dp[k-1][D];
                dp[k][n] = dp[k][n] % mod;
        }
    }

    long long result = dp[K][N] % mod;
    cout << result << endl;
}