#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

struct confer {
	int start;
	int fin;
};

struct confer A[100000];
int result = 0;

bool compareC(struct confer A1, struct confer A2) {
	if (A1.fin == A2.fin) {
		if (A1.start < A2.start) {
			return true;
		}
		else {
			return false;
		}
	}
	else {
		return A1.fin < A2.fin;
	}
}

void calculMax(int numTest) {
	int test = 0;
	sort(A, A + numTest, compareC);
	test = A[0].fin;
	result++;
	for (int i = 1; i < numTest; i++) {
		if (A[i].start >= test) {
			result++;
			test = A[i].fin;
		}
	}
}

int main() {
	int numTest;
	cin >> numTest;
	for (int i = 0; i < numTest; i++) {
		cin >> A[i].start >> A[i].fin;
	}
	calculMax(numTest);
	printf("%d\n", result);
	return 0;
}