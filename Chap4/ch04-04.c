/*
*���ϸ� ch0404
*�й� + �̸� : 202511220 ������
*���α׷� ��� : �������� ����(��)�� �Է¹޾� ��:��:�ʷ� ��ȯ�ϴ� ���α׷�
*�ۼ��� : 20250414
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0404(void);
int getTime(int t);

int main(void)
{
	assignment0404();

	return 0;
}

/*
* �Լ� �̸� : assignment0404
* ��� : ������ ���� �Է�, �ð� �� �� ��� �� ��� �Լ� ȣ��
* ��ȯ �� : 0 ��ȯ
*/

int assignment0404(void)
{
	//1. ������ ���� ���� ����
	int time = 0;
	//2. ������ ���� �Է¹ޱ�
	printf("����ð�(��): ");
	scanf("%d", &time);
	//3. �Լ� ȣ��
	getTime(time);

	return 0;
}

/*
* �Լ� �̸� : getTime
* ��� : ������ ���� �Է¹޾� �ð� �� �ʷ� ��ȯ, �ð� �� �� ���
* ��ȯ �� : 0 ��ȯ
*/

int getTime(int t)
{
	//1. �ð�, ��, �� ���� ����
	int hour = 0, minute = 0, second = 0;
	//2. �ð�, ��, �� ���
	hour = t / 3600;
	minute = (t % 3600) / 60;
	second = t % 60;
	//3.��갪 ���
	printf("%d�ð� %d�� %d�� �Դϴ�.\n", hour, minute, second);
	//4.�Լ� ����
	return 0;
}