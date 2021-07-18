#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, num;
	cin >> N;
	vector<float> above(N);
	for (int i = 0; i < N; i++) {
		cin >> num;
		int sum = 0, ave;
		float aboveAve = 0;
		vector<int> stu(num);
		for (int j = 0; j < num; j++) {
			cin >> stu[j];
			sum += stu[j];
			}
		ave = sum / num;
		for (int j = 0; j < num; j++)
			if (stu[j] > ave) aboveAve++;
		aboveAve = aboveAve / num * 100;
		above[i] = aboveAve;
	}
	cout << fixed;
	cout.precision(3);
	for (int i = 0; i < N; i++) {
		cout << above[i] << "%" << endl;
	}
	return 0;
}