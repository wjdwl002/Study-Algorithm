/*
1463 1로 만들기
실버3
DP, BFS
2022.10.02
*/

#include <bits/stdc++.h>
using namespace std;

int N;
int MAX = 1000005;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

//initialize
    cin >> N;

//algorithm
/*
    1. 테이블 정의: D[i] = i를 1로 만들기 위해 필요한 연산 사용 횟수의 최솟값
    2. 점화식 찾기
     D[k] = min(D[k/3]+1, D[k/2]+1, D[k-1]+1)
    3. 초깃값 찾기
     D[1] = 0
*/
    int D[MAX];
    D[1] = 0;

    for(int i=2; i<N+1; i++){
        D[i] = D[i-1]+1;
        if(i % 3 == 0) D[i] = min(D[i], D[i/3] + 1);
        if(i % 2 == 0) D[i] = min(D[i], D[i/2] + 1);
    }
    cout << D[N] << endl;
}