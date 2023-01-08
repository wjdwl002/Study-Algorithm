/*
2587 대푯값2
브론즈2
정렬
2023.01.08
*/


#include <bits/stdc++.h>
using namespace std;

int sum = 0;
vector<int> vec(5);

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for(int i=0; i<5; i++){
        int a; 
        cin >> a;
        vec[i] = a;
        sum += vec[i];
    }

    sort(vec.begin(), vec.end());

    cout << sum / 5 << '\n' << vec[2] << endl;
}