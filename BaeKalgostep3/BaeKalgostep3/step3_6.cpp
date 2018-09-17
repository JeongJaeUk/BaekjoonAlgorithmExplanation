#include <stdio.h>

int main() {
	int i, k = 0;
	int n = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (k = 0; k < n - i; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}