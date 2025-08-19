//#3052 ³ª¸ÓÁö
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[10];
	int count=0;
	
	for (int i = 0;i < 10;i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0;i < 10;i++) {
		arr[i] = arr[i] % 42;
	}

	for (int i = 0;i < 10;i++) {
		int duplicate = 0;
		for (int j = 0;j <i;j++) {
			if (arr[i] == arr[j]) {
				duplicate = 1;
				break;
			}
		}
		if (duplicate == 0) {
			count = count + 1;
		}
	}
	
	printf("%d", count);
	return 0;

}