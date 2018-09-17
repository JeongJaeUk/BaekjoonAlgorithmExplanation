#include <stdio.h>

int main() {
	int n, m, day; 
	scanf("%d %d", &n, &m);
	if (n == 1) {
		day = m % 7;
	}
	else if (n == 2) {
		day = (m + 3) % 7;
	}
	else if (n == 3) {
		day = (m + 3) % 7;
	}
	else if (n == 4) {
		day = (m + 6) % 7;
	}
	else if (n == 5) {
		day = (m + 1) % 7;
	}
	else if (n == 6) {
		day = (m + 4) % 7;
	}
	else if (n == 7) {
		day = (m + 6) % 7;
	}
	else if (n == 8) {
		day = (m + 2) % 7;
	}
	else if (n == 9) {
		day = (m + 5) % 7;
	}
	else if (n == 10) {
		day = m % 7;
	}
	else if (n == 11) {
		day = (m + 3) % 7;
	}
	else if (n == 12) {
		day = (m + 5) % 7;
	}
	if (day == 1) {
		printf("%s", "MON");
	}
	else if (day == 2) {
		printf("%s", "TUE");
	}
	else if (day == 3) {
		printf("%s", "WED");
	}
	else if (day == 4) {
		printf("%s", "THU");
	}
	else if (day == 5) {
		printf("%s", "FRI");
	}
	else if (day == 6) {
		printf("%s", "SAT");
	}
	else if (day == 0) {
		printf("%s", "SUN");
	}
	return 0;
}