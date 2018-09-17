#include <stdio.h>
#include <string.h>

char str[1000];
int lengthofinnerPalindrome = 1;

bool checkPalindrome(int start, int max) {
	if (start == max) {
		return true;
	}
	else if (start > max) {
		lengthofinnerPalindrome--;
		return true;
	}
	else {
		if (str[start] == str[max]) {
			start++;
			max--;
			lengthofinnerPalindrome = lengthofinnerPalindrome + 2;
			checkPalindrome(start, max);
		}
		else {
			lengthofinnerPalindrome = 1;
			return false;
		}
	}
}

int main()
{
	scanf("%s", str);
	int start = 0;
	int maxNum = strlen(str);
	while(1) {
		if (checkPalindrome(start, maxNum - 1) == true) {
			break;
		}
		start++;
	}
	printf("%d", (2 * strlen(str)) - lengthofinnerPalindrome);
	return 0;
}