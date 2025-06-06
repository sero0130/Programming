/*
*���ϸ� ch10-03.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : Ŀ�Ǽ󿡼� �ǸŵǴ� ��ǰ ������ ��Ÿ���� PRODUCT ����ü ����(�� ��ǰ���� ��ǰ��, ����, ��� �����ؾ���) �� ����ü�� �Ű������� ���޹޾� ��ǰ ������ ����ϴ� print_product �Լ� ����
*�ۼ��� : 20250606
*���� ��ȣ : 10-08
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* ����ü�� : product
* ��� : ��ǰ ������ �����ϱ� ���� ����ü
* ������� :
* - name : ��ǰ���� �����ϴ� ���ڿ�
* - price : ��ǰ�� ������ �����ϴ� ������ ����
* - stock : ��ǰ�� ��� �����ϴ� ������ ����
*/

typedef struct product
{
	char name[20];  // ��ǰ��
	int price;     // ����
	int stock;     // ���
}PRODUCT;

int print_product(void);

int main(void)
{
	print_product();

	return 0;
}

/*
* �Լ��� : assignment1003
* ��� : ��ǰ ������ �Է¹޾� ����ϴ� �Լ�
* ��ȯ�� : 0
*/

int print_product(void)
{
	PRODUCT product;

	// ��ǰ ���� �Է�
	printf("��ǰ�� : ");
	scanf("%s", product.name);
	printf("���� : ");
	scanf("%d", &product.price);
	printf("��� : ");
	scanf("%d", &product.stock);

	// ��ǰ ���� ���
	printf("[%s %d�� ��� : %d��]\n", product.name, product.price, product.stock);

	return 0;
}