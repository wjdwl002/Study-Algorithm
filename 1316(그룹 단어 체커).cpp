#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int n,cnt=0;
    vector <string> vec;
    cin >> n;
    for (int i =0; i< n; i++){
        string str;
        cin >> str;
        vec.push_back(str);
    }
    for (int i=0; i< n; i++){
        if(vec[i].length() > 0){
            vector<int> vecToCheck1(300,0);
            vector<bool> vecToCheck2(30,false);
            char c = vec[i][0];
            c-= 97;
            vecToCheck2[c] = true;
            for (int j =1; j<vec[i].length(); j++){
                char c = vec[i][j];
                c -= 97;
                int m = c;
                if(vec[i][j]!= vec[i][j-1] && vecToCheck2[c] == true){
                    cnt++;
                    break;
                }
                else{
                    vecToCheck1[c]++;
                    vecToCheck2[c] = true;
                }
                
            }  
        }
    }
    cout << n - cnt;
    return 0;
}