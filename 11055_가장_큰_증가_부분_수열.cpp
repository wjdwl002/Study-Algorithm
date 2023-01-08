/*
11055 가장 큰 증가 부분 수열
실버2
DP
2023.01.08
*/


#include <bits/stdc++.h>
using namespace std;

/* 문제 목표
수열의 증가 부분 수열중 합이 가장 큰 것을 구하기
*/

/* 문제 분석
https://www.notion.so/11055-507b0360d6514ee6bf547d9d2e5cdf92
*/

int N, ans;
int arr[1001];
pair<int, int> dp[1001];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;

    for(int i=1; i<=N; i++){
        cin >> arr[i];
    }

    dp[1].first = 1;
    dp[1].second = arr[1];
    ans = dp[1].second;

    for(int i=2; i<=N; i++){
        dp[i].first = 1;
        dp[i].second = arr[i];
        for(int j=1; j<i; j++){
            if(arr[j] < arr[i] && dp[j].second + arr[i] > dp[i].second) {
                dp[i].first = max(dp[j].first + 1, dp[i].first);
                dp[i].second = dp[j].second + arr[i];
            }
        }
        ans = max(ans, dp[i].second);
    }

    cout << ans << endl;
}