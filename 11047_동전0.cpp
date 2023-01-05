/*
11047 동전 0
실버4
Greedy
2023.01.05
*/


#include <bits/stdc++.h>
using namespace std;

/* 문제 목표
동전 개수를 최소로 사용해서 K를 만들기
*/
/* 문제 분석
문제에 명시되어있지는 않지만, 동전으로 못만드는 수는 없을것이다.
가령, 주어진 동전 가치중 제일 값싼게 10원인데 xxx6원을 만들라는등 .. 이런 일은 없을것이다.
이말은, 주어진 동적으로 어찌됐든 다 만들 수 있다는 것이니 그냥 큰거부터 넣어보면 될듯

*/
int N, K, sum = 0, cnt = 0;
int coins[11];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> K;

    for(int i=1; i<=N; i++){
        cin >> coins[i];
    }
    
    while(sum != K && N > 0){
        if(sum + coins[N] <= K){
            sum += coins[N];
            cnt++;
        }
        else N--;
    }

    cout << cnt << endl;
}