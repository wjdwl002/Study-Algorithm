#include <bits/stdc++.h>
using namespace std;

int N, K;
string input;
deque<char> dq;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

//initialize
    // cin >> N >> K;
    // cin >> input;

    N = 10;
    K = 4;
    input = "4177252841";

    // 앞쪽에서부터 순회하면서 deque에 그때그때 비교하면서 넣어줌

    for(int i=0; i<input.length(); i++){
        //1. K가 0이 아닐떄 (아직 뺄 숫자가 남았을 때)
        //2. !dq.empty(): 덱이 비어있지 않을 때(비어있으면 비교할 대상이 없기 때문에 현재 input 그냥 넣어줌)
        //3. dq.back() < input[i]: dq에 남아있는 숫자가 지금 넣을 숫자보다 작을 때
        // => dq.pop_back()을 해주고 K의 개수를 줄여줌
        while(K && !dq.empty() && dq.back() < input[i]){
            dq.pop_back();
            K--;
        }
        dq.push_back(input[i]);
    }
    
    for (unsigned int i = 0; i < dq.size() - K; i++){
        cout << dq[i];
    }
    
    return 0;
}