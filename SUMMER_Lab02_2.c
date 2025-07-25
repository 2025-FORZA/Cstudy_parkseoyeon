//#2947 나무조각
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[5];
	int num;

	for (int i = 0; i <5; i++) {
		scanf("%d", &arr[i]);
	}

	while (1){
		for (int i = 0;i < 4;i++) {

			if (arr[i] > arr[i + 1]) {
				num = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = num;

				for (int k = 0; k < 5; k++) {
					printf("%d ", arr[k]);
				}
				printf("\n");
			}
			

			
		}
		if (arr[0] == 1 && arr[1] == 2 && arr[2] == 3 && arr[3] == 4 && arr[4] == 5) {
			break;
		}
		else {
			continue;
		}
		
	}
	return 0;
}