#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char plan[105][105];
    int n, m, i, j;

    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++) {
        scanf("%s", plan[i]);
    }

    for (i = 0; i < m; i++) {
        int safe = 1;

        for (j = 0; j < n; j++) {
            if (plan[j][i] == 'O') {
                safe = 0;
                break; 
            }
        }

        if (safe == 1) {
            printf("%d", i + 1);
            return 0;
        }
    }
    printf("ESCAPE FAILED");
    return 0;
}
