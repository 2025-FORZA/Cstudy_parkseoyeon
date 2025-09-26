#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int count, ave, m_count;
	

	scanf("%d %d", &count,&ave);
	
	m_count = count * (ave - 1) + 1;
	printf("%d", m_count);

	return 0;
}