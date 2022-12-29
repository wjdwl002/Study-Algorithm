#include <bits/stdc++.h>
#include <string>

using namespace std;

string input;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int result = 0;
    int subResult = 0;
    string num = "";

//initialize
    cin >> input;

//code
    for(int i = input.length(); i >= 0; i--){
        if(input[i] == '+' || input[i] == '-'){
            reverse(num.begin(), num.end());
            subResult += stoi(num);
            num = "";
            if(input[i] == '-'){
                result -= subResult;
                subResult = 0;
            }
        }
        else {
            // 숫자일 경우
            num += input[i];
        }
    }
    // 마지막 숫자 그냥 더해줌
    reverse(num.begin(), num.end());
    subResult += stoi(num);
    result += subResult;

    cout << result << endl;
}