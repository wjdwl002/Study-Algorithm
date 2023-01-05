/*
11399 ATM
실버4
Greedy
2023.01.05
*/


#include <bits/stdc++.h>
#include <vector>
using namespace std;

/* 문제 목표
줄을 서 있는 사람의 수 N과 각 사람이 돈을 인출하는데 걸리는 시간 Pi가 주어졌을 때, 
각 사람이 돈을 인출하는데 필요한 시간의 합의 최솟값 구하기
*/
/* 문제 분석
주어진 시간들 P는 도착하는 순서대로가 아니고 그냥 순수하게 소요 시간을 나타낸 것이며, 
나는 P 수열들을 그냥 제일 빨리 처리할 수 있는 순서대로 정렬만 하면 된다.
오래걸리는걸 먼저 처리했을때 생길 수 있는 잠재적 이점.. 같은건 없다.
그냥 빠른거부터 처리하면됨
*/

int N, sum = 0; 
vector<int> vec;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;

    for (int i=0; i<N; i++){
        int temp; 
        cin >> temp;
        vec.push_back(temp);
    }

    sort(vec.begin(), vec.end());

    for(int i=0; i<N; i++){
        for(int j=0; j<=i; j++){
            sum += vec[j];
        }
    }

    cout << sum << endl;
}