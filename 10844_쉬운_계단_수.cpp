/*
10844 쉬운 계단 수
실버1
DP
2023.01.05~06
*/


#include <bits/stdc++.h>
using namespace std;

/* 문제 목표
길이가 N인 계단수가 총 몇개있는지 구하기 (1 <= N <= 200)
*/

/* 문제 분석
마지막 수가 뭔지에 따라서 더할 수 있는 숫자가 달라지므로, 이중 배열로 잡고 마지막 자리 수를 인덱스로 잡는다
dp[i][j] 는 길이가 i면서 마지막 자리수가 j인 수의 개수이다.
j가 0, 9일때만 예외고, 나머지는 일반화 할 수 있다.
*/

int N, mod = 1000000000, sum=0;
int dp[101][10];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;

    for(int j=1; j<=9; j++){
        dp[1][j] = 1;
    }

    for(int i=2; i<=N; i++){
        for(int j=0; j<=9; j++){
            if(j == 0){
                dp[i][j] = dp[i-1][1] % mod;
            }
            else if(j == 9){
                dp[i][j] = dp[i-1][8] % mod;
            }
            else {
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1])  % mod;
            }
        }
    }

    for(int i=0; i<=9; i++){
        sum = (sum + dp[N][i]) % mod;
    }
    cout << sum % mod << endl;
}