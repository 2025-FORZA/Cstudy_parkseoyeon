//#1152 �ܾ��� ����_A
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char s[1000001];
	fgets(s, sizeof(s), stdin);
	//stdin>>ǥ���Է�
	int n=0;
	int len = strlen(s);

	if (s[len - 1] == '\n') {
		s[len - 1] = '\0';
	}

	len = strlen(s);

	for (int i = 1; i < len; i++) {
		if (s[i - 1] == ' ' && s[i] != ' ') {
			n++;
		}
	//" "�̸� �ּ� �񱳶� �ȵȴ�.	
	}

	if (s[0] != ' ') {
		n++;
	}
	printf("%d",n);

	return 0;
}

