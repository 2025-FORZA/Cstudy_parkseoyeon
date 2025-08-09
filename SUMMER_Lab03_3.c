//#2588 °ö¼À
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    
    printf("%d\n", b % 10 * a);
    printf("%d\n", (b / 10)%10 * a);
    printf("%d\n", (b / 100)* a);
    printf("%d", (b / 100) * a * 100 + (b / 10) % 10 * a * 10 + b % 10 * a);
    return 0;
}