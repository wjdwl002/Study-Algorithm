/*
1202 보석 도둑
골드2
Greedy
2022.10.12
*/

#include <bits/stdc++.h>
using namespace std;

int N, K;
pair<int, int> jew[1000005]; // 보석의 가격, 무게 (0 ≤ jew ≤ 1,000,000)
int bags[300005]; // 가방에 담을 수 있는 최대무게  (1 ≤ bags ≤ 100,000,000)

bool compare(const pair<int, int>& a, const pair<int, int>& b){
    if(a.first == b.first) return a.second > b.second;
    return a.first > b.first;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int result = 0;
    int maxBagWeight = 0;
//initialize
    cin >> N >> K;
    for(int i=0; i<N; i++){
        cin >> jew[i].second >> jew[i].first;
    }
    for(int i=0; i<K; i++){
        cin >> bags[i];
    }

    sort(jew, jew + N, compare); // 보석 가격 desc + 무게 desc 정렬
    sort(bags, bags+K);

    for(int i=0; i<N; i++){
        for(int j=0; j<K; j++){
            if(bags[j] >= jew[i].second){
                 // 가방이 있으면 보석을 넣고 가방을 비활성화(-1)
                result += jew[i].first;
                bags[j] = -1;
                break;
            }
        }
    }
    
    cout << result << endl;
    return 0;
}