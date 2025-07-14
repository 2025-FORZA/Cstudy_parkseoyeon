//#2444 º°Âï±â-7
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	int i;
	int j;
	int v;

	for (i = 1;i <= N;i = i + 1) {
		for (v= 1;v <= N-i;v = v +1) {
			printf(" ");
		}
		for (j = 1;j <= 2 * i - 1;j = j + 1) {
			printf("*");
		}
		printf("\n");
	}

	for (i = N-1;i>=1;i = i - 1) {

		for (v = 1;v <= N-i;v = v + 1) {
			printf(" ");
		}
		for (j = 1;j <= 2 * i - 1;j = j + 1) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}