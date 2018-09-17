#include <stdio.h>

int carculrateTime(int test[], int num) {
	int result = 0;
	int temp;
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num - i - 1; j++) {
			if (test[j] > test[j + 1]) {
				temp = test[j];
				test[j] = test[j + 1];
				test[j + 1] = temp;
			}
		}
	}
	for (int k = 0; k < num; k++) {
		result = result + (num - k) * test[k];
	}

	return result;
}

int main() {
	int A[1000];
	int n;
	int result;
	for (int i = 0; i < 1000; i++) {
		A[i] = 0;
	}
	
	scanf("%d", &n);
	for (int j = 0; j < n; j++) {
		scanf("%d", &A[j]);
	}
	result = carculrateTime(A, n);
	printf("%d", result);

	return 0;
}