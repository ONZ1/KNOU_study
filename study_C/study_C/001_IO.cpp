#include<stdio.h>

int main(void)
{
	printf("hello world\n");

	printf("\n[����1]\n");

	//����1: ������ ����, ���
	int a = 10;
	int b = 30;
	int c = 200;
	int d = 500;

	printf("%d\n%d\n%d\n%d\n", a, b, c, d);

	printf("\n[����2]\n");
	//����2: ���� ������ 10cm�� �� ���� ���̿� �ѷ�

	float PI = 3.141592;
	int diameter_q1 = 10;
	float radius_q1 = diameter_q1 / 2;

	printf("���� ����: %.2f\n���� �ѷ�: %.2f\n", PI * radius_q1 * radius_q1, PI * diameter_q1);

	printf("\n[����3]\n");
	//����3: ���� ������ �޾� �ѷ�, ���̸� ���

	int diameter;

	printf("���� ������ �� ������ �Է����ּ���:\n");
	scanf_s("%d", &diameter);

	float radius = diameter / 2;

	printf("���� ����: %.2f\n���� �ѷ�: %.2f\n", PI * radius * radius, PI * diameter);

	printf("\n[����4]\n");
	//����4: ������ 5���� ���

	int five = 5;

	printf("%d * 1 = %d\n", five, five * 1);
	printf("%d * 2 = %d\n", five, five * 2);
	printf("%d * 3 = %d\n", five, five * 3);
	printf("%d * 4 = %d\n", five, five * 4);
	printf("%d * 5 = %d\n", five, five * 5);
	printf("%d * 6 = %d\n", five, five * 6);
	printf("%d * 7 = %d\n", five, five * 7);
	printf("%d * 8 = %d\n", five, five * 8);
	printf("%d * 9 = %d\n", five, five * 9);

	printf("\n[����5]\n");
	//����5: ����ڷκ��� 1~9 ������ ���� �Է¹޾� �ش� ������ ���

	int num;

	printf("1~9�� �ϳ��� �Է����ּ���:\n");
	scanf_s("%d", &num);

	printf("%d * 1 = %d\n", num, num * 1);
	printf("%d * 2 = %d\n", num, num * 2);
	printf("%d * 3 = %d\n", num, num * 3);
	printf("%d * 4 = %d\n", num, num * 4);
	printf("%d * 5 = %d\n", num, num * 5);
	printf("%d * 6 = %d\n", num, num * 6);
	printf("%d * 7 = %d\n", num, num * 7);
	printf("%d * 8 = %d\n", num, num * 8);
	printf("%d * 9 = %d\n", num, num * 9);

	return 0;
}