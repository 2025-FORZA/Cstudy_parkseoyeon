//#9498 시험성적_C
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (90 <= n && n <= 100) {
        printf("%c", 'A');
    }
    else if (80 <= n && n < 90) {
        printf("%c", 'B');
    }
    else if (70 <= n && n < 80) {
        printf("%c", 'C');
    }
    else if (60 <= n && n < 70) {
        printf("%c", 'D');
    }
    else {
        printf("%c", 'F');
    }

    return 0;
}
//else if 써야 함
//문자 출력할때 작은 따옴표
//if 조건 범위 두개 X 한개&&한개