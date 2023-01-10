/*
1037 약수
브론즈1
정수론 및 조합론
2023.01.08
*/


#include <bits/stdc++.h>
#include <vector>
using namespace std;

int N;
vector<int> vec;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;

    for(int i=0; i<N; i++){
        int a;
        cin >> a;
        vec.push_back(a);
    }

    if(N == 1) {
        cout << vec[0] * vec[0] << endl;
        return 0;
    }

    sort(vec.begin(), vec.end());

    cout << vec[0] * vec[N-1] << endl;   
}