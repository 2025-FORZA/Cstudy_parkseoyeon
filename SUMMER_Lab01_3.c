//#10811 바구니 뒤집기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	int N, M;
	int i, j;
	scanf("%d %d", &N, &M);

	int arr[100];

	for (int a = 0;a < N;a = a + 1) {
		arr[a] = a + 1;
	}



	int k;
	for (k = 1;k <= M;k = k + 1) {
		scanf("%d %d", &i, &j);
		
		while (i < j) {
			int a;
			a = arr[i-1];
			arr[i-1] = arr[j-1];
			arr[j-1] = a;
			i = i + 1;
			j = j - 1;
		}
	}

	int b;
	for (b = 0;b < N;b = b + 1) {
		printf("%d ", arr[b]);
	}


	return 0;
	}
