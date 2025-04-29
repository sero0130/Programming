/*
*파일명 ch0506
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 햄버거 가게의 계산서 프로그램
*작성일 : 20250429
*문제 번호 : 5-9
*버전 : v0.1
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
 * 함수 이름 : assignment0506
 * 기능 : 수량 입력 계산값 출력
 * 반환값 : 0 반환
 */

int assignment0506(void)
{
	//1. 수량 입력받을 변수 설정
	int set = 0 ,total = 0;
	int burger = 0, drink = 0, side = 0;
	//2. 수량 입력받기

	printf("[햄버거 4000원, 감자튀김 2000원, 콜라 1500원, 세트 6500원]\n");
	printf("햄버거 수량 : ");
	scanf("%d", &burger);
	printf("감자튀김 수량 : ");
	scanf("%d", &side);
	printf("콜라 수량 : ");
	scanf("%d", &drink);

	//3. 세트 메뉴 계산
	set = getTotal(burger, drink, side);

	//4. 계산값 출력
	printf("\n\n상품명                단가    수량    금액\n");
	if (set != 0)
	{
		printf("세트                %d    %d    %d\n", setprice, set, set * setprice);
	}
	if (burger - set != 0)
	{
		printf("햄버거             %d    %d    %d\n", bugerprice, burger - set, (burger - set) * bugerprice);
	}
	if (side - set != 0)
	{
		printf("감자튀김           %d    %d    %d\n", sideprice, side - set, (side - set) * sideprice);
	}
	if (drink - set != 0)
	{
		printf("콜라               %d    %d    %d\n", drinkprice, drink - set, (drink - set) * drinkprice);
	}
	printf("========================================\n");
	printf("합계                            %d\n", (burger - set) * bugerprice + (side - set) * sideprice + (drink - set) * drinkprice + set * setprice);

	return 0;
}

/*
* 함수 이름 : getTotal
 * 기능 : 세트 메뉴 계산
 * 반환값 : 세트 메뉴
 */

int getTotal(int burger, int drink, int side)
{
	//1. 변수 설정
	int set = 0, total = 0;

	//2. 세트 메뉴 계산
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