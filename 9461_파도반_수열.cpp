/*
9461 파도반 수열
실버 3
DP
2022.12.31
*/

/*문제 목표
P(N): 나선에 있는 정삼각형의 변의 길이
*/

/*문제 분석
최대 변의 길이를 M(N)이라고 하면
M(1) = 1 
M(2) = 1
M(3) = 1
M(4) = M(1) + M(3) = 2
M(5) = M(4) = 2
M(6) = M(1) + M(5)
M(7) = M(2) + M(6)
M(8) = M(3) + M(7)
M(9) = M(4) + M(8) 
M(10) = M(5) + M(9)
M(11) = M(6) + M(10)
*/

#include <bits/stdc++.h>
using namespace std;

int T;
long int arr[101];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

//initialize
    cin >> T;
    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 1;
    arr[4] = 2;
    arr[5] = 2;

    for(int i=6; i<=100; i++){
        arr[i] = arr[i-5] + arr[i-1];
        // cout << i << " " << arr[i] << endl;
    }

    for(int i=0; i<T; i++){
        int N;
        cin >> N; 
        cout << arr[N] << endl;
    }
}