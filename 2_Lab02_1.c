//#2743 단어길이 재기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    char n[101];
    int count = 0;
    scanf("%s", n);
    for (int i = 0;n[i] != NULL;i++) {
        count++;
    }


    printf("%d", count);
    return 0;
}