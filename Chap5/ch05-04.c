/*
*���ϸ� ch0504
*�й� + �̸� : 202511220 ������
*���α׷� ��� : �µ��� �Է¹޾� �����µ��� ȭ���µ��� ��ȯ �ϴ� ���α׷�
*�ۼ��� : 20250429
*���� ��ȣ : 5-5
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0504(void);
double celsius(double fahreheit);
double fahrenheit(double celsius);

int main(void)
{
	assignment0504();

	return 0;
}

/*
* �Լ� �̸� : assignment0504
* ��� : �µ��� �Է¹޾� �����µ��� ȭ���µ��� ��ȯ
* ��ȯ�� : 0 ��ȯ
*/

int assignment0504(void)
{
	//1. �µ� �Է¹��� ���� ����
	double temp = 0.0;
	char unit = 0;

	printf("�µ� �Է� (�����µ� C, ȭ���µ� F) : ");
	scanf("%lf %c", &temp, &unit);
	
	//2. �µ� ��ȯ
	switch (unit)
	{
	case 'C':
		printf("%.2lf ==> %.2lf", temp, fahrenheit(temp));
		break;

	case 'F':
		printf("%.2lf ==> %.2lf", temp, celsius(temp));
		break;

	default:
		printf(" C �Ǵ� F�θ� �Է��ϼ���.");
		break;
	}


	return 0;
}

/*
* �Լ� �̸� : celsius
* ��� : ȭ���µ��� �����µ��� ��ȯ
* ��ȯ�� : �����µ� ��ȯ
*/

double celsius(double fahrenheit)
{
	//1. ȭ���µ��� �����µ��� ��ȯ
	double celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
	return celsius;
}

/*
* �Լ� �̸� : fahrenheit
* ��� : �����µ��� ȭ���µ��� ��ȯ
* ��ȯ�� : ȭ���µ� ��ȯ
*/

double fahrenheit(double celsius)
{
	//1. �����µ��� ȭ���µ��� ��ȯ
	double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
	return fahrenheit;
}