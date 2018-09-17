#include <stdio.h>

int main() {
	int i = 0;
	int n = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("%d\n", n - i);
	}
	return 0;
}