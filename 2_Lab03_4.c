#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n;
	int count = 0;
	int output = 0;
	scanf("%d", &n);

	for (int i = 0;i < n;i++) {
		scanf("%d", &count);
		output = (count)+output;

	}
	printf("%d", output - (n - 1));
	return 0;
}