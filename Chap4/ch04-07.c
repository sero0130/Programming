/*
*���ϸ� ch0407
*�й� + �̸� : 202511220 ������
*���α׷� ��� : 32��Ʈ ũ����(��ȣ���� ������)�� 4������ ���� 7, 15, 23, 31 �� ��Ʈ�� 1�� �����ϰ� � ������ �˾ƺ��� ���α׷�
*�ۼ��� : 20250414
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0407(void);
int getBit(int n, int bit);

int main(void)
{
	assignment0407();

	return 0;
}

/*
* �Լ� �̸�	: assignment0407
* ���	: 32��Ʈ ũ����(��ȣ���� ������)�� 4������ ���� 7, 15, 23, 31 �� ��Ʈ�� 1�� �����ϰ� � ������ �˾ƺ��� ���α׷�
* ��ȯ��	: 0 ��ȯ
*/

int assignment0407(void)
{
	//1. 32��Ʈ ũ����(��ȣ���� ������)�� 4���� ����
	unsigned int a = 0, b = 0, c = 0, d = 0;
	//2. ���� 7, 15, 23, 31 �� ��Ʈ�� 1�� ����
	a = getBit(a, 7);
	b = getBit(b, 15);
	c = getBit(c, 23);
	d = getBit(d, 31);
	//3. ������ ��Ʈ�� 1�� ������ �� ���
	printf("7�� ��Ʈ�� 1�� �� %08X %u\n", a, a);
	printf("15�� ��Ʈ�� 1�� �� %08X %u\n", b, b);
	printf("23�� ��Ʈ�� 1�� �� %08X %u\n", c, c);
	printf("31�� ��Ʈ�� 1�� �� %08X %u\n", d, d);
	return 0;
}

/*
* �Լ� �̸�	: getBit
* ���	: 32��Ʈ ũ����(��ȣ���� ������)�� n�� bit ��° ��Ʈ�� 1�� ����
* ��ȯ��	: n�� bit ��° ��Ʈ�� 1�� ������ �� ��ȯ
*/

int getBit(int n, int bit)
{

	unsigned int mask = 0;
	//1. n�� bit ��° ��Ʈ�� 1�� ����
	mask = n |= 1 << bit;

	return mask;
}