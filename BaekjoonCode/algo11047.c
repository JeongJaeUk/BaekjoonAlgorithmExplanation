#include <stdio.h>

int calculNum(int test[], int dollor, int numCoin) {
	int result = 0;
	for (int i = numCoin - 1; i >= 0; i--) {
		result = result + dollor / test[i];
		dollor = dollor%test[i];
	}
	return result;
}

int main() {
	int numCoin;
	int dollor;
	int A[10];
	int result = 0;
	for (int i = 0; i < 10; i++) {
		A[i] = 0;
	}
	scanf("%d", &numCoin);
	scanf("%d", &dollor);
	for (int i = 0; i < numCoin; i++) {
		scanf("%d", &A[i]);
	}
	result = calculNum(A, dollor, numCoin);
	printf("%d", result);

	return 0;
}