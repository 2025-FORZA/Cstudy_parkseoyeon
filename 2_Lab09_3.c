#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num[42]={0}, i, n, m;
	int sum = 0;
	for (i = 0;i < 10;i++) {
		scanf("%d", &n);
		m = n % 42;
		num[m] = 1;
	}
	for (i = 0;i < 42;i++) {
		if (num[i] == 1)
			sum++;
	}
	printf("%d", sum);
	return 0;
}