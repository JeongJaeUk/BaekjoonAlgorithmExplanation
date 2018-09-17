#include <stdio.h>

int main() {
	double a, b;
	scanf("%lf %lf", &a, &b);
	printf("%10.9lf", a / b);
	return 0;
}