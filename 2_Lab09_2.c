#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b, c,t,result;
	scanf("%d %d %d", &a, &b, &c);
	scanf("%d", &t);
	if (t <= 30)
		printf("%d", a);
	else {
		if ((t - 30) % b == 0) {
			result = a + ((t - 30) / b) * c;
			printf("%d", result);
		}
		else {
			result = a + ((t - 30) / b + 1) * c;
			printf("%d", result);
		}
	}
	return 0;
}