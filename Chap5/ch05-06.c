/*
*���ϸ� ch0506
*�й� + �̸� : 202511220 ������
*���α׷� ��� : �ܹ��� ������ ��꼭 ���α׷�
*�ۼ��� : 20250429
*���� ��ȣ : 5-9
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0506(void);
int getTotal(int burger, int drink, int side);

int bugerprice = 4000, drinkprice = 1500, sideprice = 2000, setprice = 6500;

int main(void)
{
	assignment0506();

	return 0;
}

/*
 * �Լ� �̸� : assignment0506
 * ��� : ���� �Է� ��갪 ���
 * ��ȯ�� : 0 ��ȯ
 */

int assignment0506(void)
{
	//1. ���� �Է¹��� ���� ����
	int set = 0 ,total = 0;
	int burger = 0, drink = 0, side = 0;
	//2. ���� �Է¹ޱ�

	printf("[�ܹ��� 4000��, ����Ƣ�� 2000��, �ݶ� 1500��, ��Ʈ 6500��]\n");
	printf("�ܹ��� ���� : ");
	scanf("%d", &burger);
	printf("����Ƣ�� ���� : ");
	scanf("%d", &side);
	printf("�ݶ� ���� : ");
	scanf("%d", &drink);

	//3. ��Ʈ �޴� ���
	set = getTotal(burger, drink, side);

	//4. ��갪 ���
	printf("\n\n��ǰ��                �ܰ�    ����    �ݾ�\n");
	if (set != 0)
	{
		printf("��Ʈ                %d    %d    %d\n", setprice, set, set * setprice);
	}
	if (burger - set != 0)
	{
		printf("�ܹ���             %d    %d    %d\n", bugerprice, burger - set, (burger - set) * bugerprice);
	}
	if (side - set != 0)
	{
		printf("����Ƣ��           %d    %d    %d\n", sideprice, side - set, (side - set) * sideprice);
	}
	if (drink - set != 0)
	{
		printf("�ݶ�               %d    %d    %d\n", drinkprice, drink - set, (drink - set) * drinkprice);
	}
	printf("========================================\n");
	printf("�հ�                            %d\n", (burger - set) * bugerprice + (side - set) * sideprice + (drink - set) * drinkprice + set * setprice);

	return 0;
}

/*
* �Լ� �̸� : getTotal
 * ��� : ��Ʈ �޴� ���
 * ��ȯ�� : ��Ʈ �޴�
 */

int getTotal(int burger, int drink, int side)
{
	//1. ���� ����
	int set = 0, total = 0;

	//2. ��Ʈ �޴� ���
	if (burger <= drink)
	{
		if (burger <= side)
		{
			set = burger;
		}
		else
		{
			set = side;
		}
	}
	else
	{
		if (drink <= side)
		{
			set = drink;
		}
		else
		{
			set = side;
		}
	}

	return set;
}