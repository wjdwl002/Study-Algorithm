/*
16139 인간-컴퓨터 상호작용
실버1
누적합
2022.2.1
*/


#include <bits/stdc++.h>
using namespace std;

int N;
string str;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> str >> N;

    int dp[str.length()+1][26];
    
    for(int i=1; i<=str.length(); i++){
        for(int j=0; j<26; j++){
            dp[i][j] = dp[i-1][j];
        }
        dp[i][str[i-1]-'a'] = dp[i-1][str[i-1]-'a'] + 1;
    }

    for(int i=0; i<N; i++){
        char c; int n, m;
        cin >> c >> n >> m;
        cout << dp[m+1][c-'a'] - dp[n][c-'a'] << endl;
    }
}