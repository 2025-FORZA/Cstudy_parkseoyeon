//#27866 ���ڿ� ���ڿ�_D
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char S[1001];
    //�������� ����+1>>������� ����
    int i;

    scanf("%s", S);
    //&�� �� �� ����
    scanf("%d", &i);

    printf("%c", S[i - 1]);
    return 0;
}