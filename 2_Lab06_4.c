#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//���ڿ����ϸ� ���ڰ� �� �ϳ��� ���ڷ� ���� ���ڿ���
int main() {
    char arr[10];
    int j, i;

    for (j = 0; j < 3; j++) {
    
        int max = 1, count = 1;
        scanf("%s", arr);

        for (i = 0; i < 7; i++) {
            if (arr[i] == arr[i + 1]) {
                count++;
            }
            else {
                if (count > max)
                    max = count;
                count = 1;
            }
        }

        if (count > max) // ������ ���� üũ
            max = count;

        printf("%d\n", max);
    }

    return 0;
}
