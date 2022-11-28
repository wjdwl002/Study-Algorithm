#include <bits/stdc++.h>
using namespace std;

int N;
pair<int, int> flower[100005]; // [endDate, startDate] => 내부적으로 계산해서 숫자로 만들거임

int calcDate(int mon, int day){
    int date = 0;
    for(int i=1; i<mon; i++){
        if(i == 4 || i == 6 || i == 9|| i == 11) date += 30;
        else if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i ==12) date += 31;
        else if(i == 2) date += 28;
        else continue;
    }   
    date += day;
    return date;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

//initialize
    cin >> N;
    cout << endl;
    for(int i=0; i<N; i++){
        int mon, day;
        cin >> mon >> day;
        flower[i].first = calcDate(mon, day);
        cin >> mon >> day;
        flower[i].second = calcDate(mon, day);
    }


    sort(flower, flower+N);
    int STARTDATE 
}
