#include <stdio.h>

int main() {
	int i = 0;
	int n = 0;
	scanf("%d", &n);
	for (i = 0; i < 9; i++) {
		printf("%d * %d = %d\n", n, i+1, n*(i+1));
	}
	return 0;
}