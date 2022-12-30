/*
11279 최대 힙
실버2
Heap
2022.12.29
*/
#include <bits/stdc++.h>
#include <queue>
#include <algorithm>
using namespace std;

int N, x;
priority_queue<int> pq;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> x;
        if(x == 0){
            if (pq.empty()) cout << 0 << '\n';
            else {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
        else {
            pq.push(x);
        }
    }
}