/*
*파일명 ch0405
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 원- 달러 매매기준율과 환전 우대율을 입력받아 달러를 살때 적용되는 환율을 결정하고, 
*						   구입하고자 하는 달러가 얼마인지 입력받아 몇원에 해당하는지 출력하는 프로그램
*작성일 : 20250414
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0405(void);
double getDollar(double inputdollar, double dollar, double rate, double percent);
double exchange(double d, double r, double p);

int main(void)
{
	assignment0405();

	return 0;
}

/*
* 함수 이름: assignment0405
* 기능 : 환전 우대율, 매매기준율, 환전 수수료, 구입하고자 하는 달러 입력받아 환전 후 달러 가격 출력
* 반환값 : 0 반환
*/

int assignment0405(void)
{
	//1. 환전 우대율, 매매기준율, 환전 수수료, 구입하고자 하는 달러 변수 설정
	double id, dollar, rate, percent = 0.0;
	double printdollar = 0.0;
	//2. 환전 우대율, 매매기준율, 환전 수수료, 구입하고자 하는 달러 입력받기
	printf("매매기준율?:");
	scanf("%lf", &dollar);
	printf("환전 우대율(0~100%)?:");
	scanf("%lf", &percent);
	printf("환전 수수료?:");
	scanf("%lf", &rate);
	printf("달러살때 환율?: %lf\n", exchange(dollar, rate, percent));

	printf("구입하고자 하는 달러?:");
	scanf("%lf", &id);

	//3. 환전 후 달러 가격 출력
	printdollar = getDollar(id, dollar, rate, percent);
	printf("USD %.2lf 살때 ==> KRW %.2lf\n", id, printdollar);
	// 함수 종료
	return 0;
}

/*
* 함수 이름 : getDollar
* 기능 : 환전 후 달러 가격 계산
* 반환	값 : 환전 후 달러 가격 반환
*/

double getDollar(double inputdollar, double dollar, double rate, double percent)
{
	double fp = 0.0; // 최종가격
	double exdollar = 0.0;
	exdollar = exchange(dollar, rate, percent);
	
	fp = inputdollar * exdollar; //환전 후 달러 가격

	return fp;
}


/*
* 함수 이름 : exchange
* 기능 : 환전 우대율, 매매기준율, 환전 수수료를 입력받아 환전 후 달러 가격 계산
* 반환값 : 환전 후 달러 가격 반환
*/

double exchange(double d, double r, double p)
{
	double dollar = 0.0;						//매매기준율
	double exrate = 0.0;

	exrate = d * r/100 * (1.0 - p / 100.0); // 환전 수수료
	dollar = d + exrate; // 현찰 매입시 환율

	return dollar;
}