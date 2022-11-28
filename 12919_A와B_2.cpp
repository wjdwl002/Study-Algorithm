/*
12919 A와 B 2
골드5
Greedy
2022.10.11
*/

#include <bits/stdc++.h>
using namespace std;

string S, T;

void checkAB(string S, string T){
    if(S == T) {
        cout << '1' << endl;
        exit(0);    
    }

    if(S.length() >= T.length()) return;

    string Tcopy;
    if(T[T.length() - 1] == 'A'){
        // 조건 1(뒤에 A만 한개 붙힘)으로 만든것임
        // cout << '1' << ' ' << S << ' ' << T << endl;
        Tcopy = T;
        Tcopy.pop_back();
        checkAB(S, Tcopy);
    }

    if(T[0] == 'B'){
        // 조건 2(뒤에 B붙히고 reverse)으로 만든것임
        // cout << '2' << ' ' <<  S << ' ' << T << endl;
        Tcopy = T;
        reverse(Tcopy.begin(), Tcopy.end());
        Tcopy.pop_back();
        checkAB(S, Tcopy);
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

//initialize
    cin >> S >> T;
    checkAB(S, T);

    cout << '0' << endl;
}