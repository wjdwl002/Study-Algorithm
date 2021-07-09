#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    double fixedCost, extraCost, price, revenue = 0;
    long long int breakPoint = 0; 
    cin>> fixedCost >> extraCost >>  price;
    if (extraCost >= price) {
        cout << -1;
        return 0;
    }
    else {
        revenue = fixedCost / (price - extraCost);
        if(revenue - int(revenue) == 0 ){breakPoint = revenue+1;}
        else {breakPoint = ceil(revenue);}
    }
    cout << breakPoint;
    return 0;
}