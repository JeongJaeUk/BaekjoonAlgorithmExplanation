#include <stdio.h>

int table[1000][1000];

int Max(int a, int b, int c) {
	if (a >= b && a >= c) {
		return a;
	}
	else if (b >= a && b >= c) {
		return b;
	}
	else if (c >= a && c >= b){
		return c;
	}
}

int maxThreeInput(int verticalLocation, int horizontalLocation) {
	int fromup = 0;
	int fromleft = 0;
	int fromleftup = 0;
	if (verticalLocation == 0) {
		if (horizontalLocation == 0) {
			return table[verticalLocation][horizontalLocation];
		}
		else {
			fromup = 0;
			fromleft = table[verticalLocation][horizontalLocation - 1] + table[verticalLocation][horizontalLocation];
			fromleftup = 0;
		}
	}
	else if (horizontalLocation == 0) {
		if (verticalLocation == 0) {
			return table[verticalLocation][horizontalLocation];
		}
		else {
			fromup = table[verticalLocation - 1][horizontalLocation] + table[verticalLocation][horizontalLocation];
			fromleft = 0;
			fromleftup = 0;
		}
	}
	else {
		fromup = table[verticalLocation - 1][horizontalLocation] + table[verticalLocation][horizontalLocation];
		fromleft = table[verticalLocation][horizontalLocation - 1] + table[verticalLocation][horizontalLocation];
		fromleftup = table[verticalLocation - 1][horizontalLocation - 1] + table[verticalLocation][horizontalLocation];
	}
	return Max(fromup, fromleft, fromleftup);
}

int main() {
	int vertical;
	int horizontal;
	int element;
	int savednum;
	scanf("%d %d", &vertical, &horizontal);
	for (int i = 0; i < vertical; i++) {
		for (int j = 0; j < horizontal; j++) {
			scanf("%d", &element);
			table[i][j] = element;
		}
	}
	for (int i = 0; i < vertical; i++) {
		for (int j = 0; j < horizontal; j++) {
			table[i][j] = maxThreeInput(i, j);
		}
	}
	printf("%d", table[vertical - 1][horizontal - 1]);
	printf("\n");
	return 0;
}