//#14909 양수 개수 세기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int n;
    int count = 0;
    while (scanf("%d", &n) != EOF) {
        if (n > 0) {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}