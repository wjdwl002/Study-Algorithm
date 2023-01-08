/*
10815 숫자 카드
집합
실버5
2023.01.08
*/


#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<int> vec(20000001,0);
int N, M;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;

    for(int i=0; i<N; i++){
        int a;
        cin >> a;
        vec[a+10000000] = 1;
    }

    cin >> M;
    for(int i=0; i<M; i++){
        int a;
        cin >> a;
        if(vec[a+10000000] == 1) cout << 1 << " ";
        else cout << 0 << " ";
    }

    cout << endl;
}