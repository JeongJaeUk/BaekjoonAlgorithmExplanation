#include <stdio.h>

int main() {
	int n;
	int temp;
	int result = -1;
	scanf("%d", &n);
	if (n % 5 == 0) {
		result = n / 5;
	}
	else {
		for (int i = 0; i < (n / 5)+1; i++) {
			temp = n - (i * 5);
			if (temp % 3 == 0) {
				result = i + (temp / 3);
			}
		}
	}

	printf("%d", result);
	return 0;
}