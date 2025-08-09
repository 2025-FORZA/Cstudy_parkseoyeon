//#10870 피보나치 수 5
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int num1, num2;
	int ex;
	num1 = 0;
	num2 = 1;
	if (n == 0) {
		printf("%d", num1);
	}
	else if (n == 1) {
		printf("%d", num2);
	}
	else {
		for (int i = 1;i < n;i++) {
			ex = num1;
			num1 = num2;
			num2 = ex + num2;
		}
		printf("%d", num2);
	}
	return 0;
}