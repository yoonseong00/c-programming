#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5
int main(void)
{
	int data[SIZE];
	int i;
	for (i = 0; i < SIZE; i++)
	{
		printf("정수를 입력하시오:");
		scanf("%d", &data[i]);
	}
	for (i = SIZE - 1; i >= 0; i--) 
	{
		printf("%d\n", data[i]);
	}
	return 0;
}