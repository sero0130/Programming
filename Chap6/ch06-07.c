/*
*���ϸ� ch06-07.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : ��ġ �����Ϳ� �������� ���ڷ� �޾� �׷����� ����ϴ� graph �Լ� �ۼ�( ��ġ�����ʹ� 0~ 9999 ������ ������ ����, �������� 100)
*�ۼ��� : 20250523
*���� ��ȣ : 6-19
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int graph(int data, int scale);
int Assignment19(void);

int main(void)
{
	Assignment19();

	return 0;
}

/*
* �Լ��� : Assignment19
* ��� : ��ġ �����Ϳ� �������� ���ڷ� �޾� �׷����� ����ϴ� graph �Լ� �ۼ�( ��ġ�����ʹ� 0~ 9999 ������ ������ ����, �������� 100)
* ��ȯ�� : 0
*/

int Assignment19(void)
{
	int data = 0;
	int scale = 0;
	int i = 0;

	//������ ���� ����
	data = rand() % 10000; // 0~9999 ������ ���� ����
	scale = 100; //������

	//�׷��� ���
	for (i = 0; i < 3; i++)
	{
		graph(data, scale);
		data = rand() % 10000; // 0~9999 ������ ���� ����
	}


	return 0;

}

/*
* �Լ��� : graph
* ��� : ��ġ �����Ϳ� �������� ���ڷ� �޾� �׷����� ����ϴ� �Լ�
* ��ȯ�� : 0
*/

int graph(int data, int scale)
{
	int i = 0;
	int result = 0;

	//�׷��� ���
	printf("%d : ", data);
	for (i = 0; i < data / scale; i++)
	{
		printf("*");
	}
	printf("\n");

	return 0;
}

