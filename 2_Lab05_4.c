#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n[101] = { 0 };
    int N, M;

    scanf("%d %d", &N,&M); 

    for (int a = 0; a < M; a++) {
        int i, j, k;
        scanf("%d %d %d", &i, &j, &k);

        for (int b = i; b <= j; b++) { 
            n[b] = k; 
        }
    }

    for (int b = 1; b <= N; b++) {
        printf("%d ", n[b]);
    }

    return 0;
}
