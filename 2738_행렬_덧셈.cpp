/*
2738 행렬 덧셈
기초
브론즈5
2023.01.08
*/

#include <bits/stdc++.h>
using namespace std;

int N, M;
int arr[101][101];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> arr[i][j];
        }   
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            int num;
            cin >> num;
            arr[i][j] += num;

            cout << arr[i][j] << " ";
        }   
        cout << endl;
    }
}