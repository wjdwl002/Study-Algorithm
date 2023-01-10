/*
11050 이항 계수
브론즈1
정수론 및 조합론
2023.01.09
*/


#include <bits/stdc++.h>
using namespace std;

int N, K, ans = 1;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> K;

    for(int i=K+1; i<=N; i++){
        ans *= i;
    }
    
    for(int i=2; i<=N-K; i++){
        ans /= i;
    }

    cout << ans << endl;
}