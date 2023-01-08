/*
2480 주사위 세개
기초
브론즈4
2023.01.08
*/


#include <bits/stdc++.h>
using namespace std;

int A, B, C;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> A >> B >> C;

    if(A == B && B == C) cout << 10000 + 1000 * A << endl;
    else if(A == B || B == C || C == A){
        if(A == B) cout << 1000 + 100 * A << endl;
        if(A == C) cout << 1000 + 100 * A << endl;
        if(B == C) cout << 1000 + 100 * B << endl;
    }
    else {
        cout << max(max(A, B), C) * 100 << endl;
    }
}