//#4564 숫자 카드놀이
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int s;
    while (1) {
        scanf("%d", &s);
        if (s == 0) break; 

        printf("%d", s); 
        while (s >= 10) {
            int n = 1;
            int temp = s;
            while (temp > 0) {
                n *= (temp % 10); 
                temp /= 10;
            }
            printf(" %d", n); 
            s = n;
        }
        printf("\n"); 
    }
    return 0;
}