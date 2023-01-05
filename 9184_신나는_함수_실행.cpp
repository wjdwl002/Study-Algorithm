/*
9184 신나는 함수 실행
실버2
DP
2022.12.30
*/


#include <bits/stdc++.h>
using namespace std;

int a,b,c;
int arr[21][21][21];

long int w(long int a, long int b, long int c){
    // cout << "w(" << a <<  ", " << b << ", " << c << ") " << endl;
    if(a <= 0 || b <= 0 || c <= 0) return 1;
    else if(a > 20 || b > 20 || c > 20) return w(20, 20, 20);
    else if(arr[a][b][c] != 0) return arr[a][b][c];
    else if(a < b && b < c) arr[a][b][c] = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
    else arr[a][b][c] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);

    return arr[a][b][c];
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while(1){
        cin >> a >> b >> c;
        if(a == -1 && b == -1 && c == -1) break;
        cout << "w(" << a <<  ", " << b << ", " << c << ") = " << w(a, b, c) << endl;
    }
}