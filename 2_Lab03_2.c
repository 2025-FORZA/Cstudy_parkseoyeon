#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n;
	int m;
	int Y = 0;
	int M = 0;

	scanf("%d",& n);

	for (int i = 0;i < n;i++) {
		scanf("%d", &m);

		if (m < 30) {
			Y = Y + 10;
		}
		else {
			Y = Y + ((m / 30) + 1) * 10;
		}

		if (m < 60) {
			M = M + 15;
		}
		else {
			M = M + ((m / 60) + 1) * 15;
		}
	}


	if (Y < M) {
		printf("Y ");
		printf("%d", Y);
	}

	else if (M < Y) {
		printf("M ");
		printf("%d", M);
	}

	else if (Y ==M) {
		printf("Y M ");
		printf("%d", Y);
	}
	return 0;
}