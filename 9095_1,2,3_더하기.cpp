/*
9095 1,2,3 더하기
실버3
DP
2022.10.02
*/

#include <bits/stdc++.h>
using namespace std;

int N;

int DP(int n){
// D[k] = D[]
    int D[n];
    D[1] = 1;
    D[2] = 2;
    D[3] = 4;
    if(n < 4) return D[n];
    for(int i=4; i<=n; i++){
        D[i] = D[i-3]+ D[i-2] + D[i-1];
        // cout << i << ' ' << D[i] << endl;
    }
    return D[n];
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

//initialize
    cin >> N;
    for(int i=0; i<N; i++){
        int t;
        cin >> t;

        int result = DP(t);
        cout << result << endl;
    }
}
