//1157 단어공부
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    char word[1000001];
    int count[26] = { 0 };

    scanf("%s", word);
   
    for (int i = 0; word[i] != '\0'; i++) {
        char ch = word[i];    
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }
        count[ch - 'A']++;
    }

    int max = 0;
    int max_index = -1;
    int duplicate = 0;

    for (int i = 0; i < 26; i++) {
        if (count[i] > max) {
            max = count[i];
            max_index = i;
            duplicate = 0;
        }
        else if (count[i] == max) {
            duplicate = 1;
        }
    }

    if (duplicate)
        printf("?\n");
    else
        printf("%c\n", max_index + 'A');

    return 0;
}