#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int p, q, count = 0;
	scanf("%d", &p);
	scanf("%d", &q);
	for (int i = 1;i <=p;i++) {
		if (p % i == 0) {
			count++;
			if (count == q) {
				printf("%d", i);
				return 0;
			}

		}
	}
	printf("0");
	return 0;
}