#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, result = 0;
	int i = 0;
	char k[101];
	cin >> n;
	cin >> k;
	for (i = 0; i < n; i++) {
		result = result + (int)k[i] - 48;
	}
	cout << result;
	return 0;
}