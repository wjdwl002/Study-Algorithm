#include <iostream>
using namespace std;

int main() {
	int N, M, cnt = 0;
	cin >> N;
	M = N;

	N = (N % 10) * 10 + (((N / 10) + (N % 10)) % 10);
	cnt++;
	while (M != N) {
		N = (N % 10) * 10 + (((N / 10) + (N % 10)) % 10);
		cnt++;
	}
	cout << cnt;
}
