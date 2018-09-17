#include <iostream>

using namespace std;

int main() {
	int n;
	int a, b = 0;
	int count=0;
	cin >> n;
	int temp = n;
	int cal;
	while (1) {
		count++;
		a = temp / 10;
		b = temp % 10;
		cal = (b * 10) + ((a + b) % 10);
		temp = cal;
		if (n == cal) {
			cout << count;
			break;
		}
	}
	return 0;
}