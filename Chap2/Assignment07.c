#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void printorder(void);

int main(void)
{
	printorder();


	return 0;
}

void printorder(void)
{
	char size;
	int num;

	printf("Ŀ�� ������(S, T, G)�� �ֹ� ����?");
	scanf("%c %d", &size, &num);
	printf("%c ������ Ŀ�� %d�� �ֹ��մϴ�.\n", size, num);

	return;
}