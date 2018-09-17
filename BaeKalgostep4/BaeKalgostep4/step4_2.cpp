#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int table[3];
	cin >> table[0] >> table[1] >> table[2];
	sort(table, table + 3);
	cout << table[1];
	return 0;
}