/*
*���ϸ� ch06-04.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : �޴��� ����ϰ� ���õ� �޴� �׸��� ��ȣ�� �����ϴ� �Լ� �ۼ�
*�ۼ��� : 20250523
*���� ��ȣ : 6-6
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int choose_menu(void);
int Assignment06(void);

int main(void)
{
	Assignment06();

	return 0;
}

/*
* �Լ��� : Assignment06
* ��� : �޴��� ����ϰ� ���õ� �޴� �׸��� ��ȣ�� �����ϴ� �Լ�
* ��ȯ�� : 0
*/

int Assignment06(void)
{
	int menu = 0;
	//�޴� ����
	while (1)
	{
		menu = choose_menu();
		if (menu == 0)
		{
			break;
		}
	}


	return 0;
}

/*
* �Լ��� : choose_menu
* ��� : �޴��� ����ϰ� ���õ� �޴� �׸��� ��ȣ�� �����ϴ� �Լ�
* ��ȯ�� : �޴� ��ȣ
*/

int choose_menu(void)
{
	int menu = 0;

	//�޴� �Է�
	printf("[1.���� ���� 2.���� ���� 3.�μ� 0.����]");
	scanf("%d", &menu);

	//�޴� ����
	switch (menu)
	{
	case 1:
		printf("���� ����\n");
		break;
	case 2:
		printf("���� ����\n");
		break;
	case 3:
		printf("�μ�\n");
		break;
	case 0:
		break;
	}

	return menu;
}