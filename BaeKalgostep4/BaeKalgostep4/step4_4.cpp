#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	float table[1001];
	float result = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> table[i];
	}
	sort(table, table + n);
	for (int i = 0; i < n; i++) {
		result = result + table[i] * 100 / table[n - 1];
	}
	cout << fixed;
	cout.precision(2);
	cout << result / n;
	return 0;
}
