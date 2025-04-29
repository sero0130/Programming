/*
*파일명 ch05-02
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 거스름돈의 금액을 입력받아 금액별로 몇개 필요한지 구해서 출력하는 프로그램
*작성일 : 20250429
*문제 번호 : 5-3
*버전 : v0.1
*/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int assignment0502(void);
int getChange(int money);

int main(void)
{
	assignment0502();

	return 0;
}

int assignment0502(void)
{
	//1. 거스름돈 금액 변수 설정
	int money = 0;
	printf("거스름돈 금액 : ");
	scanf("%d", &money);

	//2.거스름돈에서 10원 미만이 있다면 절사
	if (money % 10 != 0)
	{
		money = money - (money % 10);
	}
	else
	{
		money = money;
	}

	//3. 10원 절사 값 출력
	printf("10원 절사 금액 : %d\n", money);

	//4. 함수 호출
	getChange(money);

	return 0;
}

int getChange(int money)
{
	//1. 거스름돈 금액별로 몇개 필요한지 변수 설정
	int fifty = 0, ten = 0, five = 0, one = 0, hundred = 0, tenwon = 0;

	//2. 계산
	fifty = money / 50000;
	ten = (money % 50000) / 10000;
	five = (money % 10000) / 5000;
	one = (money % 5000) / 1000;
	hundred = (money % 1000) / 100;
	tenwon = (money % 100) / 10;
	

	//2. 금액별로 몇개 필요한지 출력
	printf("50,000원권 : %d장\n", fifty);
	printf("10,000원권 : %d장\n", ten);
	printf("5,000원권 : %d장\n", five);
	printf("1,000원권 : %d장\n", one);
	printf("100원권 : %d개\n", hundred);
	printf("10원권 : %d개\n", tenwon);

	return 0;
}