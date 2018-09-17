#include <iostream>
#include <algorithm>

using namespace std;

float score[1000];
float studentnum[1000];
float aver[1000];
float dev[1000];

int main() {
	int casenum;
	int count;
	int temp;
	cin >> casenum;
	for (int i = 0; i < casenum; i++) {
		temp = 0;
		count = 0;
		cin >> studentnum[i];
		for (int j = 0; j < studentnum[i]; j++) {
			cin >> score[j];
			aver[i] = aver[i] + score[j];
		}
		aver[i] = aver[i] / studentnum[i];
		for (int j = 0; j < studentnum[i]; j++) {
			if (aver[i] < score[j]) {
				count++;
			}
		}
		dev[i] = count;
	}
	for (int i = 0; i < casenum; i++) {
		cout << fixed;
		cout.precision(3);
		cout << dev[i] * 100 / studentnum[i] << "%\n";
	}
	return 0;
}