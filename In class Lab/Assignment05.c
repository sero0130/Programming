#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void printweight(void);

int main(void)
{
	printweight();


	return 0;
}

void printweight(void)
{
	float weight = 0;

	printf("������?");
	scanf("%f", &weight);

	printf("�Է��� �����Դ� %.2fKG�Դϴ�.\n", weight);

	return;
}