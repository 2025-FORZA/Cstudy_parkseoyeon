//10809 ¾ËÆÄºª Ã£±â
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	char S[101];
	scanf("%s", S);

	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int length = strlen(alphabet);

	int i;
	for (i = 0;i < length;i = i + 1) {
		char*ptr = strchr(S, alphabet[i]);
		if (ptr != NULL) {
			printf("%d ", ptr- S);
		}
		else {
			printf("-1 ");
		}
	 }

	return 0;
}