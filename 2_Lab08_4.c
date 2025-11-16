#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N;
    int K;
    scanf("%d %d", &N, &K);

    int count = 1;
    for (int i = 1; i < N; i++) {
        count =count* 2; 
    }

    printf("%d\n", K / count);
    return 0;
}