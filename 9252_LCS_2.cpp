/*
9252 LCS 2
골드5
DP
2022.12.29
*/

#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

string str1, str2, result = ""; 
int lcs[1005][1005];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string tmp1, tmp2;
    cin >> tmp1 >> tmp2;
    
    str1 = '0' + tmp1;
    str2 = '0' + tmp2;

    int len1 = str1.size();
    int len2 = str2.size();

    // str1 기준으로 str2을 비교할것이다.
    for(int i=0; i<len1; i++){
        for(int j=0; j<len2; j++){
            if(i == 0 || j == 0) {
                lcs[i][j] = 0;
                continue;
            }
            if(str1[i] == str2[j]){ // 두 수열이 같으면
                lcs[i][j] = lcs[i-1][j-1] + 1;
            }
            else { // 두 수열이 다르면 LCS의 수는 여전하므로 위와 왼쪽중에 큰 값을 고른다.
                lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
            }
        }
    }

    int i = len1 -1;
    int j = len2 -1;
    while(lcs[i][j] != 0){
        if(lcs[i][j] == lcs[i][j-1]) j--;
        else if(lcs[i][j] == lcs[i-1][j]) i--;
        else if(lcs[i][j] - 1 == lcs[i-1][j-1]){
            result.push_back(str1[i]);
            i--;
            j--;
        }
    }

    reverse(result.begin(), result.end());
    cout << lcs[len1-1][len2-1] << endl << result << endl;
}