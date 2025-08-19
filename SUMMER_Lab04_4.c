//#1546 ЦђБе
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n;
	int arr[1000];
	int max;
	float avg = 0;
	
	scanf("%d", &n);

	for (int i = 0;i < n;i++) {
		scanf("%d", &arr[i]);
	}

	max = arr[0];
	for (int i = 0;i < n;i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	for (int i = 0;i < n;i++) {
		avg = avg + (float)arr[i] / max * 100;
	}
	
	printf("%f", avg/n);
	return 0;
}