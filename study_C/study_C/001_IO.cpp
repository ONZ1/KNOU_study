#include<stdio.h>

int main(void)
{
	printf("hello world\n");

	printf("\n[����1]\n");

	//����1: ������ ����, ���
	int a = 10, b = 30, c = 200, d = 500;		//���� a,b,c,d�� ������ ����

	printf("%d\n%d\n%d\n%d\n", a, b, c, d);			//���� ���

	printf("\n[����2]\n");
	//����2: ���� ������ 10cm�� �� ���� ���̿� �ѷ�

	float PI = 3.141592;		//��� PI����
	int diameter_q2 = 10;		//������ ���� ����
	float radius_q2 = diameter_q2 / 2;		//���������� ����� ���� ����

	//���� ���� = pi*r*r ���� �ѷ� = pi*2r
	printf("���� ����: %.2f\n���� �ѷ�: %.2f\n", PI * radius_q2 * radius_q2, PI * diameter_q2);

	printf("\n[����3]\n");
	//����3: ���� ������ �޾� �ѷ�, ���̸� ���

	int diameter;

	printf("���� ������ �� ������ �Է����ּ���:\n");
	scanf_s("%d", &diameter);		//���� ������ �� ���� �Է¹޾� diameter�� ����

	float radius = diameter / 2;

	printf("���� ����: %.2f\n���� �ѷ�: %.2f\n", PI * radius * radius, PI * diameter);

	printf("\n[����4]\n");
	//����4: ������ 5���� ���

	int five = 5;		//���� �� ������

	//������ �ش��ϴ� ��������
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
	scanf_s("%d", &num);		//�������� �Է¹޾� ���� �� ���� num�� ����

	//num�� �ش��ϴ� ��������
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