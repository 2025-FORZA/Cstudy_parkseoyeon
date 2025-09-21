#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c;
	int max;
	

	while (1) {
		scanf("%d %d %d", &a, &b, &c);

		if (a == 0 && b == 0 && c == 0)
			break;
	


		max = a;
		if (b > max) max = b;
		if (c > max) max = c;

		if (max == a) {
			if (a * a == b * b + c * c) printf("right\n");
			else printf("wrong\n");
		}

		if (max == b) {
			if (b * b == a * a + c * c) printf("right\n");
			else printf("wrong\n");
		}

		if (max == c) {
			if (c * c == b * b + a * a) printf("right\n");
			else printf("wrong\n");
		}

	 }
	return 0;
}