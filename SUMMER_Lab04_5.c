//#1427 소트인사이드
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void combine(int arr[], int left, int mid, int right, int temp[]) {
    int i = left;
    int j = mid + 1;
    int k = left;

    while (i <= mid && j <= right) {
        if (arr[i] >= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    while (j <= right) {
        temp[k++] = arr[j++];
    }

    for (int l = left; l <= right; l++) {
        arr[l] = temp[l];
    }
}
void coms(int arr[], int left, int right, int temp[]) {
    if (left < right) {
        int mid = (left + right) / 2;
        coms(arr, left, mid, temp);
        coms(arr, mid + 1, right, temp);
        combine(arr, left, mid, right, temp);
    }
}

int main() {
    char num[20]; 
    scanf("%s", num);

    int len = strlen(num);

    int* arr = (int*)malloc(sizeof(int) * len);
    int* temp = (int*)malloc(sizeof(int) * len);
    for (int i = 0; i < len; i++) {
        arr[i] = num[i] - '0';
    }

    coms(arr, 0, len - 1, temp);

    for (int i = 0; i < len; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");

    free(arr);
    free(temp);
    return 0;
}