/*
*���ϸ� ch05-01
*�й� + �̸� : 202511220 ������
*���α׷� ��� : ������ �����Ͽ� ���� ��ǥ�� ������ ���簢�� �ȿ� �ִ��� Ȯ���ϴ� ���α׷�
*�ۼ��� : 20250429
*���� ��ȣ : 5-1
*���� : v0.1
*/


#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int assignment0501(void);
int chooseArea(int left, int top, int right, int bottom);

int main(void)
{
	assignment0501();

	return 0;
}

/*
 * �Լ� �̸� : assignment0501
 * ��� : �簢�� �»�� ���� ���ϴ� ���� �Է¹޾� �簢�� �ȿ� �ִ��� Ȯ���ϴ� ���α׷�
 * ��ȯ�� : 0 ��ȯ
 */
 

int assignment0501(void)
{
	// 1. �簢�� �»�� ���� ���ϴ� �� �Է¹ޱ�
	int l = 0, t = 0, r = 0, b = 0;
	printf("�»�� ��(left, top) : ");
	scanf("%d %d", &l, &t);
	printf("���ϴ� ��(right, bottom) : ");
	scanf("%d %d", &r, &b);

	//2. �Լ� ȣ��
	chooseArea(l, t, r, b);

	return 0;
}

/*
* �Լ� �̸� : chooseArea
* ��� : ������ ���� ��ǥ�� ���簢�� �ȿ� �ִ��� Ȯ���ϴ� �Լ� 
* ��ȯ�� : 0��ȯ
*/

int chooseArea(int left, int top, int right, int bottom)
{
	int x = 0, y = 0;
	//1. x, y ��ǥ �Է¹ޱ�
	printf("���� ��ǥ�� �Է��ϼ��� : ");
	scanf("%d %d", &x, &y);
	//2. x, y ��ǥ�� �簢�� �ȿ� �ִ��� Ȯ��
	if ((x >= left && x <= right) && (y >= top && y <= bottom))
	{
		printf("���簢�� ����� ���ÿ��� ���� ���Դϴ�.\n");
	}
	else
	{
		printf("���簢�� ����� ���ÿ��� ���� ���Դϴ�.\n");
	}

	return 0;
}

