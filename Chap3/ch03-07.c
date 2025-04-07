//202511220 박찬웅
//원/달러 환율과 달러를 입력받아 몇원인지 출력하는 프로그램
//2025.04.07

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void dollarwon(void);

int main(void)
{
	dollarwon();
	
	return 0;
}

void dollarwon(void)
{
	float dollar = 0.0f;
	float exchange_rate = 0.0f;
	printf("USD: ");
	scanf("%f", &dollar);
	printf("원/달러 환율: ");
	scanf("%f", &exchange_rate);
	printf("KRW: %.2f = USD: %.2f\n", dollar * exchange_rate, dollar);

	return;
}