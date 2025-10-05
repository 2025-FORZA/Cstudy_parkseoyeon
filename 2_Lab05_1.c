#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int N, n, m;
    for (N = 10; N <= 99; N++) {
        n = N / 10;  
        m = N % 10;   

        if (n == 8 || m == 8) continue;      
        if ((n + m) % 6 != 0) continue;     
        if (((m * 10) + n) % 4 != 0) continue;

        printf("%d", N);
        return 0;
    }
    return 0;
}
