/*
2566 최댓값
기초
브론즈3
2023.01.08
*/

#include <bits/stdc++.h>
using namespace std;

int maxN = -1, x, y; 
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            int num; 
            cin >> num; 
            if(maxN < num){
                maxN = num; x = i; y = j;
            }
        }
    }

    cout << maxN << '\n' << x << " " << y << endl;
}