#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n,i,j;
	scanf("%d", &n);

	for (i = 0;i < n + 2;i++)
		printf("@");
	printf("\n");

	for (i = 0;i < n;i++) {
		printf("@");
		for (j = 0;j < n;j++)
			printf(" ");
		printf("@");
		printf("\n");
	}

	for (i = 0;i < n + 2;i++)
		printf("@");
	printf("\n");
	return 0;
}