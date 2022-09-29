/* 
1946_신입사원
Greedy
다른 모든 지원자와 비교했을 때 서류심사 성적과 면접시험 성적 중 
적어도 하나가 다른 지원자보다 떨어지지 않는 자만 선발
*/ 

#include <bits/stdc++.h>
using namespace std;

int T;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

//initialize
    cin >> T; // 테스트 케이스의 개수
    for(int i=0; i<T; i++){
        int N;
        cin >> N; // 지원자의 숫자
        pair<int, int> ranks[100005];
        for(int j=0; j<N; j++){
            cin >> ranks[j].first >> ranks[j].second;
        }
//code
/*
일단 정렬부터 ..
*/
        sort(ranks, ranks+N);
        int result = 1; //선발 가능한 지원자의 수
        int interviewRank = ranks[0].second; //현재 기준이 되는 면접점수 <- 처음은 서류심사 1등의 면접점수로 초기화
        for(int j=1; j<N; j++){
            if(ranks[j].second < interviewRank){
                interviewRank = ranks[j].second;
                result++;
            }
        }
        cout << result << "\n";
    }
}