//#12760 최후의 승자는 누구?
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return *(int*)b - *(int*)a;  
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int cards[101][101];  
    int score[101] = { 0 };

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &cards[i][j]);
        }
        qsort(cards[i], M, sizeof(int), compare);  
    }

    for (int round = 0; round < M; round++) {
        int max_val = 0;
        for (int i = 0; i < N; i++) {
            if (cards[i][round] > max_val) {
                max_val = cards[i][round];
            }
        }
     
        for (int i = 0; i < N; i++) {
            if (cards[i][round] == max_val) {
                score[i]++;
            }
        }
    }

   
    int max_score = 0;
    for (int i = 0; i < N; i++) {
        if (score[i] > max_score) {
            max_score = score[i];
        }
    }

    
    for (int i = 0; i < N; i++) {
        if (score[i] == max_score) {
            printf("%d ", i + 1);
        }
    }
    printf("\n");

    return 0;
}