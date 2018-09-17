#include <stdio.h>

int someCoin[100];
int coin[10001];

int main() {
	int numOfCoin;
	int totalCoin;
	scanf("%d %d", &numOfCoin, &totalCoin);
	coin[0] = 1;
	for (int i = 0; i < numOfCoin; i++) {
		scanf("%d", &someCoin[i]);
		for (int j = someCoin[i]; j <= totalCoin; j++) {
			coin[j] = coin[j] + coin[j - someCoin[i]];
		}
	}
	printf("%d", coin[totalCoin]);
	return 0;
}