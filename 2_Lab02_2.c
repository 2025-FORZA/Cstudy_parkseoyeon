//#2884 알람시계
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int h;
    int m;
    scanf("%d", &h);
    scanf("%d", &m);
    if (m >= 45) {
        m = m - 45;
    }
    else {
        if (h == 0) {
            h = h + 24;
        }
        h = h - 1;
        m = 60 - 45 + m;
    }
    printf("%d %d", h, m);
    return 0;
}