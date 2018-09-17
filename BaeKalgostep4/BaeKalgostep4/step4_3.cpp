#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	int x;
	int table[10000];
	cin >> n;
	cin >> x;
	for (int i = 0; i < n; i++) {
		cin >> table[i];
	}
	for (int i = 0; i < n; i++) {
		if (table[i] < x) {
			cout << table[i] << " ";
		}
	}
	return 0;
}