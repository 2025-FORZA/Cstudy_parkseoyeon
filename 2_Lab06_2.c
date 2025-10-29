#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int L, a, b, c, d,math,korean,max;
	scanf("%d %d %d %d %d", &L,&a,&b,&c,&d);
	
	math = (b + d - 1) / d;
	korean = (a + c - 1) / c;

	max = math;
	if (korean > math)
		max = korean;

	printf("%d", L-max);
	return 0;
}
