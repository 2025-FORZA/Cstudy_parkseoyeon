#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	char arr[81];
	int n,i,j,score,sum;
	scanf("%d", &n);
	for (i = 0;i < n;i++) {
		score = 0;
		sum = 0;
		scanf("%s", arr);
		for (j= 0;j < strlen(arr);j++) {
			if (arr[j] == 'O') {
				score++;
				sum =sum+ score;
			}
			else
				score = 0;
		}
		printf("%d", sum);
		printf("\n");
	}
	return 0;
}