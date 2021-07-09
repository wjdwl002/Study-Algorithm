#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int num;
    vector<string> vec;
    cin >> num;
    for (int i =0; i<num; i++){
        string temp;
        cin >> temp;
        vec.push_back(temp);
    }
    for (int i = 0; i<num; i++){
        bool check = false;
        int tempScore = 0; 
        int score = 0;
        for (int j = 0; j<vec[i].length(); j++){
            if(vec[i].at(j) == 'O'){
                tempScore++;
                score += tempScore;
            }
            else {
                tempScore = 0;
            }
        }
        cout << score << endl;
    }
    return 0;
}