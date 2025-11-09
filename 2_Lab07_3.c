#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


void change(int arr[],int m) {
	int i, j,k,temp;
	for (k = 0;k < m;k++) {
		scanf("%d %d", &i, &j);
		temp = arr[j - 1];
		arr[j - 1] = arr[i-1];
		arr[i - 1] = temp;
	}
}

int main() {
	int n, m,i;
	int arr[101] = { 0 };
	
	scanf("%d %d", &n,&m);

	for (i = 0;i < n;i++) {
		arr[i] = i + 1;
	}

	change(arr, m);

	for (i = 0;i < n;i++)
		printf("%d ", arr[i]);
	return 0;
}