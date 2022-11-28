/*
1309 동물원
실버 1
DP
2022.11.20
*/

#include <bits/stdc++.h>
using namespace std;

int N, result;
int dp[100005][3];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

//initialize
    cin >> N;

/*
1. N번째 줄에 사자가 없는 경우
2. N번째 줄의 왼쪽에 사자가 있는 경우
3. N번째 줄의 오른쪽에 사자가 있는 경우
*/
    dp[1][0] = 1;
    dp[1][1] = 1;
    dp[1][2] = 1;

//algorithm
    for(int i=2; i<=N; i++){
        dp[i][0] = (dp[i-1][0] + dp[i-1][1] + dp[i-1][2]) % 9901;
        dp[i][1] = (dp[i-1][0] + dp[i-1][2]) % 9901;
        dp[i][2] = (dp[i-1][0] + dp[i-1][1]) % 9901;
    }

    result = (dp[N][0] + dp[N][1] + dp[N][2]) % 9901;
    cout << result << endl;
}