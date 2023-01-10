/*
25305 커트라인
브론즈2
정렬
2023.01.08
*/


#include <bits/stdc++.h>
using namespace std;

int N, k;
vector<int> vec;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> k;
    for(int i=0; i<N; i++){
        int in;
        cin >> in;
        vec.push_back(in);
    }

    sort(vec.begin(), vec.end(), greater<int>());

    cout << vec[k-1] << endl;
}