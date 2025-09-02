//#27866 문자와 문자열_D
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char S[1001];
    //범위설정 길이+1>>공백까지 포함
    int i;

    scanf("%s", S);
    //&ㄴ 쓸 수 있음
    scanf("%d", &i);

    printf("%c", S[i - 1]);
    return 0;
}