#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char word[100] = "CAMBRIDGE";
    char input[100];
    char output[100];
    int i, j, len, len_1, k = 0;
    int block;

    scanf("%s", input);

    len = strlen(input);
    len_1 = strlen(word);

    for (i = 0; i < len; i++) {
        block = 0;  
        for (j = 0; j < len_1; j++) {
            if (input[i] == word[j]) {
                block = 1;  
                break;
            }
        }
        if (!block) {  
            output[k++] = input[i];
        }
    }

    output[k] = '\0';
    printf("%s", output);
    return 0;
}
