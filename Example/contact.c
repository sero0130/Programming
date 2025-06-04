#include <stdio.h>
#include <string.h>
#include "contact.h"


// isEqualContact()
// ��ȯ�� : ���� ������ 1	(true) ��ȯ, �׷��� ������ 0	(false) �� ��ȯ
// �Է�: ���� �� Contact ��

int isEqualContact(Contact a, Contact b)
{
	if (a.year == b.year && a.gender == b.gender &&
		strcmp(a.name, b.name) == 0 &&
		strcmp(a.phone, b.phone) == 0)
	{
		return 1;
	}


	return 0;
}

void printContact(Contact ct)
{
	//�̸� : 000
	//���� : 00000000000
	//���� : �� Ȥ�� ��
	//���� : 0000

	printf("�̸� : %s \n", ct.name);
	printf("���� : %s \n", ct.phone);
	printf("���� : %s \n", ct.gender == MAN ? "����" : "����");
	printf("���� : %d \n", ct.year);

}

int isEqualContactPtr(Contact* a, Contact* b)
{
	if (a->year == b->year && a->gender == b->gender &&
		strcmp(a->name, b->name) == 0 &&
		strcmp(a->phone, b->phone) == 0)
	{
		return 1;
	}


	return 0;
}

void printContactPtr(Contact* ct)
{
	//�̸� : 000
	//���� : 00000000000
	//���� : �� Ȥ�� ��
	//���� : 0000

	printf("�̸� : %s \n", ct->name);
	printf("���� : %s \n", ct->phone);
	printf("���� : %s \n", ct->gender == MAN ? "����" : "����");
	printf("���� : %d \n", ct->year);

}