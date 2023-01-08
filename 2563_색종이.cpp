/*
2563 색종이
실버5
기초
2023.01.08
*/


#include <bits/stdc++.h>
using namespace std;

/* 문제 목표

*/
/* 문제 분석

*/
int N, sum=0;
int arr[101][101];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;

    for(int i=0; i<N; i++){
        int n, m;
        cin >> n >> m;

        for(int j=n; j<n+10; j++){
            for(int k=m; k<m+10; k++){
                arr[j][k] = 1;
            }
        }
    }

    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            if(arr[i][j]) sum++;
        }
    }

    cout << sum << endl;
}