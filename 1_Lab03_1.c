//2480 주사위 세개
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{   int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int money;
	if (a == b && b == c) { money = 10000 + (1000 * a); }
	else if (a == b) { money = 1000 + (a * 100); }
	else if (a == c) { money = 1000 + (a * 100); }
	else if (b == c) { money = 1000 + (b * 100); }
	else {
		  if (a >= b && a >= c) { money = a * 100; }
	      else if (b >= a && b >= c) { money = b * 100; }
		  else { money = c * 100; }}

    printf("%d", money);
	return 0;}





