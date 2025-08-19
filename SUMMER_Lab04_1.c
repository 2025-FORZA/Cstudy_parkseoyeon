//#2562 ÃÖ´ñ°ª
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[10];
	for (int i = 0;i < 9;i++) {
		int n;
		scanf("%d", &n);
		arr[i] = n;
	}

	int max;
	max = arr[0];

	for (int i = 1;i < 9;i++) {

		if (max < arr[i]) {
			max = arr[i];
		}
	}
	int m;
	for (int i = 0;i < 9;i++) {
		if (max == arr[i]) {
			m = i;
		}
	}

	printf("%d\n", max);
	printf("%d", m + 1);



	return 0;

}
