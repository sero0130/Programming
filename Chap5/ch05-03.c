/*
*���ϸ� ch0503
*�й� + �̸� : 202511220 ������
*���α׷� ��� : ������ �Է¹޾� �������� �˻��ϴ� ���α׷�
*�ۼ��� : 20250429
*���� ��ȣ: 5-4
*���� : v0.1
*/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int assignment0503(void);
int leapYear(int year);

int main(void)
{
	assignment0503();

	return 0;
}

/*
* �Լ� �̸� : assignment0503
* ��� : ������ �Է¹޾� �������� �˻���
* ��ȯ�� : 0 ��ȯ
*/

int assignment0503(void)
{
	//1. ���� �Է¹��� ���� ����
	int year = 0, truefalse = 0;
	
	//2. ���� �Է¹ޱ�
	printf("���� �Է� : ");
	scanf("%d", &year);
	//3. ���� �˻�
	truefalse = leapYear(year);
	//4. �������� �˻� ��� ���
	if (truefalse == 1)
	{
		printf("%d���� �����Դϴ�.\n", year);
	}
	else
	{
		printf("%d���� ����Դϴ�.\n", year);
	}
	return 0;
}

/*
* �Լ� �̸� : leapYear
* ��� : ������ �Է¹޾� �������� 0�Ǵ� 1�� �˻�
* ��ȯ�� : �����̸� 1, ����̸� 0 ��ȯ
*/
	

	int leapYear(int year)
{

	//1. �������� �˻�
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return 1;
		// ����
	}
	else
	{
		return 0;
		// ���
	}

}