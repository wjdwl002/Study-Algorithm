#include <bits/stdc++.h>
using namespace std;

int N;
long long int arr[1005];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

//initialize
    cin >> N;
    arr[1] = 1;
    arr[2] = 2;

    for(int i=3; i<=N; i++){
        arr[i] = (arr[i-1] + arr[i-2]) % 10007;
    }

    cout << arr[N] << endl;
}