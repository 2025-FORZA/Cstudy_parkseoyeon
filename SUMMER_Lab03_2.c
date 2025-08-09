//#14681 사분면 고르기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int x, y, q;
	scanf("%d", &x);
	scanf("%d", &y);

	if (x > 0 && y > 0) {
		q = 1;
	}
	else if (x < 0 && y > 0) {
		q = 2;
	}
	else if (x < 0 && y < 0) {
		q = 3;
	}
	else if (x >0 && y < 0) {
		q = 4;
	}
	printf("%d", q);

	return 0;
}