//202511220 ������
//�������� �Ҽ��� 8�ڸ� ���ϱ��� ��������غ��� ���α׷�
//2025.03.20

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void printpi(void);

int main(void)
{
	printpi();

	return 0;
}

void printpi(void)
{
	double pi = 3.14159265358979323846;
	printf("pi = %.2lf\n", pi);
	printf("pi = %.4lf\n", pi);
	printf("pi = %.6lf\n", pi);
	printf("pi = %.8lf\n", pi);
	printf("pi = %e\n", pi);
}