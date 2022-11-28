#include <bits/stdc++.h>
using namespace std;

string input;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int result = 0;
    string num = "";
    bool isMinus = false;

//initialize
    cin >> input;
    for(int i; i<input.length(); i++){
        if(input[i] == '+' || input[i] == '-' || i == input.length() - 1){
            if(input[i] == '+'){
                result += stoi(num);
                num = "";
            }
            else if (input[i] == '-'){
                isMinus = true;
            }
        }
        else {
            if(isMinus){

            }
            else {
                num += input[i];
            }
        }
    }
}