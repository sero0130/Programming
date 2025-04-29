/*
*���ϸ� ch0505
*�й� + �̸� : 202511220 ������
*���α׷� ��� : ��Ʈ���� ����
*�ۼ��� : 20250429
*���� ��ȣ : 5-8
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0505(void);
int bitCalculator(int a, int b, char op);

int main(void)
{
	assignment0505();

	return 0;
}

/*
* �Լ� �̸� : assignment0505
* ��� : ��Ʈ���� ���� �����
* ��ȯ�� : 0 ��ȯ
*/

int assignment0505(void)
{
	//1. ��Ʈ ����� �Է¹��� ���� ����
	int a = 0, b = 0, result;
	char op = 0;
	
	//2. ��Ʈ ����� �Է¹ޱ�
	printf("��Ʈ ����� �Է� : ");
	scanf("%i %c %i", &a, &op, &b);
	
	//3. ����� �ޱ�
	result = bitCalculator(a, b, op);

	//4. ��� ���
	printf("%X %c %X = %X\n", a, op, b, result);

	return 0;
}

/*
* �Լ� �̸� : bitCalculator
* ��� : ��Ʈ���� ����
* ��ȯ�� : ���� ��� ��ȯ
*/

int bitCalculator(int a, int b, char op)
{
	//1. �����ڿ� ���� ��Ʈ ����
	switch (op)
	{
	case'&':
		//2.��Ʈ AND ����
		return a & b;
	case'|':
		//2. ��Ʈ OR ����
		return a | b;
	case'^':
		//2. ��Ʈ XOR ����
		return a ^ b;
	default:
		//3. �߸��� ������ �Է½� 0 ��ȯ
		return 0;
	}
}