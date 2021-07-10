#include <iostream>
using namespace std;

int main(){
    long int n, m =0, a, b;
    int denominator, numerator;
    cin >> n;
    for (int i = 1; i<10000; i++){
        m += i;
        if (n <= m){ //자리 찾기
            a = i;
            b = n - m;
            break;
        }
    }
    if (a % 2 == 1){ //홀수면
        numerator = 1;
        denominator = a;
        numerator -= b;
        denominator += b; 
    }
    else { //짝수면
        numerator = a;
        denominator = 1; 
        numerator += b;
        denominator -= b;
    }
    cout << numerator << '/' << denominator;
    return 0;
}