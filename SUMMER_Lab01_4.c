//#1855 ¾ÏÈ£
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
    int k;
    char array[201];

    scanf("%d %s", &k, array);

    int n = strlen(array);
    int row = n / k;

    char arr[20][20];


    int pos = 0;
    for (int r = 0; r < row; r++) {
        if (r % 2 == 0) {
            for (int c = 0; c < k; c++) {
                arr[r][c] = array[pos++];
            }
        }
        else {
            for (int c = k - 1; c >= 0; c--) {
                arr[r][c] = array[pos++];
            }
        }
    }


    for (int c = 0; c < k; c++) {
        for (int r = 0; r < row; r++) {
            printf("%c", arr[r][c]);
        }
    }

    return 0;
}