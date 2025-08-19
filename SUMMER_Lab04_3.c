//#8958 OXДыБо
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n, m;
	int count = 0;
    int count_score=0;
	char score[100][100];

	scanf("%d", &n);

	for (int i = 0;i < n;i++) {
		scanf("%s", score[i]);
	}

	for (int i = 0;i < n;i++) {
		count = 0;
		count_score = 0;
		m = strlen(score[i]);
		for (int j = 0;j < m;j++) {
			if (score[i][j] == 'O') {
				count = count + 1;
			}
			else {
				count = 0;
			}
			count_score = count_score + count;
		}
		printf("%d\n", count_score);
	}
	return 0;
}