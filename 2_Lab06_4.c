#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//숫자열로하면 숫자가 다 하나의 숫자로 들어가서 문자열로
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

        if (count > max) // 마지막 구간 체크
            max = count;

        printf("%d\n", max);
    }

    return 0;
}
