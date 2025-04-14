/*
*파일명 ch0404
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 동영상의 길이(초)를 입력받아 시:분:초로 변환하는 프로그램
*작성일 : 20250414
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0404(void);
int getTime(int t);

int main(void)
{
	assignment0404();

	return 0;
}

/*
* 함수 이름 : assignment0404
* 기능 : 동영상 길이 입력, 시간 분 초 계산 및 출력 함수 호출
* 반환 값 : 0 반환
*/

int assignment0404(void)
{
	//1. 동영상 길이 변수 설정
	int time = 0;
	//2. 동영상 길이 입력받기
	printf("재생시간(초): ");
	scanf("%d", &time);
	//3. 함수 호출
	getTime(time);

	return 0;
}

/*
* 함수 이름 : getTime
* 기능 : 동영상 길이 입력받아 시간 분 초로 변환, 시간 분 초 출력
* 반환 값 : 0 반환
*/

int getTime(int t)
{
	//1. 시간, 분, 초 변수 설정
	int hour = 0, minute = 0, second = 0;
	//2. 시간, 분, 초 계산
	hour = t / 3600;
	minute = (t % 3600) / 60;
	second = t % 60;
	//3.계산값 출력
	printf("%d시간 %d분 %d초 입니다.\n", hour, minute, second);
	//4.함수 종료
	return 0;
}