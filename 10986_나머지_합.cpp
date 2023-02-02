/*
10986 나머지 합
골드3
누적합
2023.2.1
*/


#include <bits/stdc++.h>
using namespace std;
 
int N, M;
long long cnt = 0, sum = 0;
long long* mod;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;

    mod = new long long[M];

    for(int i=1; i<=N; i++){
        long long n; cin >> n;
        sum += n;
        mod[sum % M] += 1;
    }
    // for(int i=1; i<=N; i++){
    //     for(int j=1; j<=i; j++){
    //         if((dp[i]-dp[i-j]) % M == 0) cnt++;
    //     }
    // } => 시간초과

    for(int i=0; i<M; i++){
        if(mod[i] < 2) continue;
        cnt+= mod[i] * (mod[i]-1) / 2;
    }

    cout << cnt + mod[0] << '\n';
}