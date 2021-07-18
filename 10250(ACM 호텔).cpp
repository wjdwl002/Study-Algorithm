#include <iostream>
using namespace std;

int main() {
    int num, H,W,N;
    cin >> num;
    for (int i = 0; i<num; i++){
        cin >> H >> W >> N;
        int room;
        if(N%H == 0){
            room = 100 * H + (N/H);
        }
        else{
            room = 100*(N%H) + (N/H) + 1;
        }
        cout << room << endl;
    }
    return 0;
}
