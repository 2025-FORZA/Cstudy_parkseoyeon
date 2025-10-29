#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int t,n,i,a,b,j;
	scanf("%d", &t);
	for (i = 0;i < t;i++) {
		scanf("%d", &n);
		a = n / 5;
		b = n % 5;
		for (j = 0;j < a;j++) {
			printf("++++ ");
		}
		for (j = 0;j < b;j++) {
			printf("|");
		}
		printf("\n");
	}
	return 0;
}