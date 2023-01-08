/*
11053 가장 긴 증가하는 부분 수열
실버2
DP
2023.01.08
*/


#include <bits/stdc++.h>
using namespace std;

/* 문제 목표
수열이 주어졌을때 가장 긴 증가하는 부분 수열의 길이 구하기
*/
/* 문제 분석

*/

int N, ans = 0;
int arr[1001], dp[1001];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    
    for(int i=1; i<=N; i++){
        cin >> arr[i];
    }

    for(int i=1; i<=N; i++){
        dp[i] = 1;
        for(int j=1; j<i; j++){
            if(arr[j] < arr[i]){
                dp[i] = max(dp[j] + 1, dp[i]);
            }
        }
        ans = max(ans, dp[i]);
    }

    cout << ans << endl;
}