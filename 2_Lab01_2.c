//#15813 너의 이름은 몇 점이니?_B
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	int n;
	int namescore=0;
	scanf("%d", &n);
	char name[101];
	scanf("%s", name);
	char alhabet[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	int score[26] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26 };
	int len = strlen(name);
	for (int i = 0;i < len;i++) {
		for (int j = 0;j < 26;j++) {
			if (name[i] == alhabet[j]) {
				namescore = score[j] + namescore;
			}
		}
	}
	printf("%d", namescore);
	return 0;
}