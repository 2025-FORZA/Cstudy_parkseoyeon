//#2839 º≥≈¡πË¥ﬁ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int count = -1; 

    for (int i = n / 5; i >= 0; i--) { 
        if ((n - 5 * i) % 3 == 0) {
            count = i + (n - 5 * i) / 3;
            break; 
        }
    }

    printf("%d", count);
    return 0;
}



/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int count = -1; 

    int i = n / 5;
    while (i >= 0) { 
        if ((n - 5 * i) % 3 == 0) {
            count = i + (n - 5 * i) / 3;
            break; 
        }
        i--; 
    }

    printf("%d", count);
    return 0;
}*/