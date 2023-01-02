/*
11052 카드 구매하기
실버1
DP
2022.12.29
*/


// 카드가 i개 포함된 카드팩의 가격 = Pi
// 카드팩 N개 중 몇개를 골라 총 카드 N개가 되게 구매하려고 할 때 돈을 가장 많이 쓰는 경우
#include <bits/stdc++.h>
using namespace std;

int N; // 구매하려고 하는 카드의 개수
int cards[1005], dp[1005];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N;
    for(int i=1; i<=N; i++){
        cin >> cards[i];
    }

    //dp[n] : n개를 사기 위한 최대금액
    dp[0] = 0;
    dp[1] = cards[1]; // 1개를 사기 위한 경우의 수는 1개짜리 카드팩
    for(int i=2; i<=N; i++){
        for(int j=1; j<=i; j++){
            dp[i] = max(dp[i-j] + cards[j], dp[i]);
        }
    }

    cout << dp[N] << endl;
}