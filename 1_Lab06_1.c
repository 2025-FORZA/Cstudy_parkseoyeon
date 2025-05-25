//11720 숫자의 합
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int N;
	scanf("%d", &N);

	char s[101];
	scanf("%s", s);
	

	int i;
	int total = 0;
	for (i = 0;i < N;i = i + 1) {
		int A;
		sscanf(&s[i], "%1d", &A);
		total = total + A;
	}

	printf("%d", total);

	return 0;
}


