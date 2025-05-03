//10950 A+B-3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int T, A, B,i;
    scanf("%d", &T); 
    for (i = 0; i < T; i=i+1) {
        scanf("%d %d", &A, &B);
        printf("%d\n", A + B); 
    }

    return 0;
}