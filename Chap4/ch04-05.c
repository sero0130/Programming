/*
*���ϸ� ch0405
*�й� + �̸� : 202511220 ������
*���α׷� ��� : ��- �޷� �Ÿű������� ȯ�� ������� �Է¹޾� �޷��� �춧 ����Ǵ� ȯ���� �����ϰ�, 
*						   �����ϰ��� �ϴ� �޷��� ������ �Է¹޾� ����� �ش��ϴ��� ����ϴ� ���α׷�
*�ۼ��� : 20250414
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0405(void);
double getDollar(double inputdollar, double dollar, double rate, double percent);
double exchange(double d, double r, double p);

int main(void)
{
	assignment0405();

	return 0;
}

/*
* �Լ� �̸�: assignment0405
* ��� : ȯ�� �����, �Ÿű�����, ȯ�� ������, �����ϰ��� �ϴ� �޷� �Է¹޾� ȯ�� �� �޷� ���� ���
* ��ȯ�� : 0 ��ȯ
*/

int assignment0405(void)
{
	//1. ȯ�� �����, �Ÿű�����, ȯ�� ������, �����ϰ��� �ϴ� �޷� ���� ����
	double id, dollar, rate, percent = 0.0;
	double printdollar = 0.0;
	//2. ȯ�� �����, �Ÿű�����, ȯ�� ������, �����ϰ��� �ϴ� �޷� �Է¹ޱ�
	printf("�Ÿű�����?:");
	scanf("%lf", &dollar);
	printf("ȯ�� �����(0~100%)?:");
	scanf("%lf", &percent);
	printf("ȯ�� ������?:");
	scanf("%lf", &rate);
	printf("�޷��춧 ȯ��?: %lf\n", exchange(dollar, rate, percent));

	printf("�����ϰ��� �ϴ� �޷�?:");
	scanf("%lf", &id);

	//3. ȯ�� �� �޷� ���� ���
	printdollar = getDollar(id, dollar, rate, percent);
	printf("USD %.2lf �춧 ==> KRW %.2lf\n", id, printdollar);
	// �Լ� ����
	return 0;
}

/*
* �Լ� �̸� : getDollar
* ��� : ȯ�� �� �޷� ���� ���
* ��ȯ	�� : ȯ�� �� �޷� ���� ��ȯ
*/

double getDollar(double inputdollar, double dollar, double rate, double percent)
{
	double fp = 0.0; // ��������
	double exdollar = 0.0;
	exdollar = exchange(dollar, rate, percent);
	
	fp = inputdollar * exdollar; //ȯ�� �� �޷� ����

	return fp;
}


/*
* �Լ� �̸� : exchange
* ��� : ȯ�� �����, �Ÿű�����, ȯ�� �����Ḧ �Է¹޾� ȯ�� �� �޷� ���� ���
* ��ȯ�� : ȯ�� �� �޷� ���� ��ȯ
*/

double exchange(double d, double r, double p)
{
	double dollar = 0.0;						//�Ÿű�����
	double exrate = 0.0;

	exrate = d * r/100 * (1.0 - p / 100.0); // ȯ�� ������
	dollar = d + exrate; // ���� ���Խ� ȯ��

	return dollar;
}