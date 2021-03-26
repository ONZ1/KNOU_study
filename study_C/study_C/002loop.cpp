#include<stdio.h>

void main()
{
	//문제1. 50보다 작은 5의 배수출력하기
	printf("\n[문제1]\n");

	for (int i = 5; i <= 50; i+=5)
	{
		printf("%d\n", i);
	}

	//문제2. 구구단 출력하기
	printf("\n[문제2]\n");

	for (int i = 1; i <= 9; i++)
	{
		printf("\n%d단\n", i);
		for (int j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}

	}

	//문제3. for loop 이용하여 별 출력
	printf("\n[문제3]\n");

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n");

	for (int i = 5; i > 0; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n");

	for (int i = 5; i > 0; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

}