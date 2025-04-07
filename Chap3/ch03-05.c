//202511220 박찬웅
//아파트의 면적을 제곱미터로 입력받아 몇평인지 출력하는 프로그램
//2025.04.07

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void aptarea(void);

int main(void)
{
	aptarea();

	return 0;
}

void aptarea(void)
{
	float area = 0.0f;
	printf("아파트의 면적(제곱미터)을 입력하시오: ");
	scanf("%f", &area);
	printf("%.2f 제곱미터 = %.2f 평\n", area, area * 0.3025f);

	return;
}