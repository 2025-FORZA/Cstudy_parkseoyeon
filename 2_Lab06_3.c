#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int count,answer,score=0,total=0,i;

	scanf("%d", &count);

	for (i = 0;i < count;i++) {
		scanf("%d", &answer);
		if (answer == 0) {
			score = 0;
		}
		else {
			score++;
		}
		total = total + score;
	}
	printf("%d", total);

	return 0;
}