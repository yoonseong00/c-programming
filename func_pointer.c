#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void menu(void);
int add(int x, int y);

int sub(int x, int y);

int mul(int x, int y);

int div(int x, int y);

void menu(void)
{
	printf("==================\n");
	printf("0. 덧셈\n");
	printf("1. 뺄셈\n");
	printf("2. 곱셈\n");
	printf("3. 나눗셈\n");
	printf("4. 종료\n");
	printf("==================\n");
}

int main(void)
{
	int choice, result, x, y;

	int(*pf[4])(int, int) = { add, sub, mul, div };

	while (1)
	{
		menu();
		printf("메뉴를 선택하시오:");
		scanf("%d", &choice);

		if (choice < 0 || choice >= 4)
			break;
		
		printf("두 개의 정수를 입력하시오:");
		scanf("%d %d", &x, &y);

		result = pf[choice](x, y);
		printf("연산결과=%d", result);

		return 0;
	}
}

int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}