#include<stdio.h>

void main()
{
	//����1. 50���� ���� 5�� �������ϱ�
	printf("\n[����1]\n");

	for (int i = 5; i <= 50; i+=5)
	{
		printf("%d\n", i);
	}

	//����2. ������ ����ϱ�
	printf("\n[����2]\n");

	for (int i = 1; i <= 9; i++)
	{
		printf("\n%d��\n", i);
		for (int j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}

	}

	//����3. for loop �̿��Ͽ� �� ���
	printf("\n[����3]\n");

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