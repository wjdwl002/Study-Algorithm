/*
No.2 [사전 문제] 현석이의 생일
2023.01.11
*/

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int T;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

//initialize
    cin >> T;
    for(int i=0; i<T; i++){
        int N,x,y,sol = 0;
        cin >> N >> x >> y;
        
        if((N < x && N < y) || 
            (N < x && y == 0) || 
            (N < y && x == 0)) 
            sol = -1;
        else {
            int exp = 0;
            while(N/pow(10,exp) != 0){
                exp++;
            }
            // 이 시점에서 exp가 N의 최대 자리임
            exp--;
            while(exp >= 0){
                int mod = N / pow(10,exp);
                if(y < mod) sol += y * pow(10, exp);
                else if(x < mod) sol += x * pow(10, exp);
                N -= mod * pow(10,exp);
                exp--;
            }
        }

        cout << "#" << i+1 << " " << sol << '\n';
    }
}