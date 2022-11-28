#include <bits/stdc++.h>
using namespace std;
/*
- 탐욕적 선택
카드개수가 적은 뭉치부터 차례로 합쳐나감
*/

// 오름차순 자동 정렬을 위해 greater cmp 함수 
priority_queue<int,vector<int>,greater<int>> card;  
int N;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

// initialize
    cin >> N;

    for(int i=0; i<N; i++){
        int a;
        cin >> a;
        card.push(a);
    }

// answer
    int ans = 0;
    
    while(card.size() > 1){
        int smallest1 = card.top();
        card.pop();
        int smallest2 = card.top();
        card.pop();
        ans += (smallest1 + smallest2);
        card.push(smallest1 + smallest2);
    }
    cout << ans;
}