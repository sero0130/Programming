/*
*���ϸ� ch10-04.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : ���簢�� ���� ��Ÿ���� RECT ����ü ����, ���� ��ǥ�� POINT ����ü�� �̿��� ����, ���簢�� ������ ����ϴ�  print_rect �Լ� ����
*�ۼ��� : 20250606
*���� ��ȣ : 10-13
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*
* ����ü�� : point
* ��� : ���� ��ǥ�� �����ϱ� ���� ����ü
* ������� :
* - x : x ��ǥ�� �����ϴ� ������ ����
* - y : y ��ǥ�� �����ϴ� ������ ����
*/

typedef struct point
{
	int x;  // x ��ǥ
	int y;  // y ��ǥ
} POINT;

/*
* ����ü�� : rect
* ��� : ���簢�� ������ �����ϱ� ���� ����ü
* ������� :
* - bottom_left : ���� �ϴ� ��ǥ�� �����ϴ� POINT ����ü
* - top_right : ���� ��� ��ǥ�� �����ϴ� POINT ����ü
*/

typedef struct rect
{
	POINT bottom_left;     // ���� �ϴ� ��ǥ
	POINT top_right; // ���� ��� ��ǥ
} RECT;

int print_rect(void);

int main(void)
{
	print_rect();
	
	return 0;
}


/*
* �Լ��� : print_rect
* ��� : ���簢�� ��ǥ�� �Է¹޾� RECT ����ü�� �����ϰ� ����ϴ� �Լ�
* ��ȯ�� : 0
*/

int print_rect(void)
{
	RECT rect;

	// ���簢�� ��ǥ �Է�
	printf("���� �ϴ� ��ǥ (x y) : ");
	scanf("%d %d", &rect.bottom_left.x, &rect.bottom_left.y);
	printf("���� ��� ��ǥ (x y) : ");
	scanf("%d %d", &rect.top_right.x, &rect.top_right.y);

	// ���簢�� ���� ���
	printf("RECT ���ϴ� ��ǥ : (%d, %d) ", rect.bottom_left.x, rect.bottom_left.y);
	printf("���� ��ǥ : (%d, %d)\n", rect.top_right.x, rect.top_right.y);

	return 0;
}