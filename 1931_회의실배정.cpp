#include <bits/stdc++.h>
using namespace std;

// Greedy Algorithm 사용
// 회의실 일정을 채택하는 순서: 
// 끝나는 순간이 빠른순 -> 시작하는 순간이 빠른순
int N;
pair<int, int> s[100005]; // [end time, start time]

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int i =0; i<N; i++){
        cin >> s[i].second >> s[i].first;
    }
    sort(s, s+N);
    
    int ans = 0;
    int t = 0; 
    for(int i=0; i<N; i++){
        // 현재 시간보다 일찍 시작하는 회의일 경우 패스
        if(t > s[i].second) continue;
        ans++; 
        t = s[i].first;
    }
    cout << ans;
}