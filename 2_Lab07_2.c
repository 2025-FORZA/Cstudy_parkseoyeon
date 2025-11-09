#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int a, b,m,n,count;
	scanf("%d", &a);
	scanf("%d", &b);
	m = a / 2;
	n = b;
	if (m > n)
		count = n;
	else
		count = m;

	printf("%d", count);

	return 0;
}