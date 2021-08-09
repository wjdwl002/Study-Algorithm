#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    bool* arr;
    arr = new bool[M+1];
    fill_n(arr, M+1, true);
    
    arr[0] = false;
    arr[1] = false;
    for (int i = 2; i<=sqrt(M); i++)
        if(arr[i]) 
            for(int j = 2 * i; j<=M; j+=i) //아직 지워진 수가 아니면 그 수의 배수 모두 지우기
                arr[j] = false;
            
    for (int i = N; i<= M; i++)
        if(arr[i]) cout << i << endl;
    return 0;
}