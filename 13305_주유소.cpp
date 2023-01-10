#include <bits/stdc++.h>
using namespace std;

int N;
int road[100005];
int price[100005];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;

    for(int i=0; i<N-1; i++){
        cin >> road[i];
    }
    for(int i=0; i<N; i++){
        cin >> price[i];
    }

    // 처음엔 현재의 기름 balance 값도 알고있어야한다고 생각했다 .. 
    // 근데 어차피 모든 도로의 길이를 아니까 제일 싼 주유소를 찾으면 나머지 모든 도로만큼을 한번에 주유하면 된다 !
    int sum = 0;
    int minPrice = price[0];

    for(int i=0; i<N-1; i++){
        if(price[i] < minPrice) minPrice = price[i];
        sum += minPrice * road[i];
    }

    cout << sum;
}