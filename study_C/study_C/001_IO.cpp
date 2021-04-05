#include<stdio.h>

int main(void)
{
	printf("hello world\n");

	printf("\n[문제1]\n");

	//문제1: 변수값 저장, 출력
	int a = 10, b = 30, c = 200, d = 500;		//변수 a,b,c,d에 정수값 저장

	printf("%d\n%d\n%d\n%d\n", a, b, c, d);			//변수 출력

	printf("\n[문제2]\n");
	//문제2: 원의 지름이 10cm일 때 원의 넓이와 둘레

	float PI = 3.141592;		//상수 PI저장
	int diameter_q2 = 10;		//변수에 지름 저장
	float radius_q2 = diameter_q2 / 2;		//반지름값을 계산해 변수 저장

	//원의 넓이 = pi*r*r 원의 둘레 = pi*2r
	printf("원의 넓이: %.2f\n원의 둘레: %.2f\n", PI * radius_q2 * radius_q2, PI * diameter_q2);

	printf("\n[문제3]\n");
	//문제3: 원의 지름을 받아 둘레, 넓이를 출력

	int diameter;

	printf("원의 지름이 될 정수를 입력해주세요:\n");
	scanf_s("%d", &diameter);		//원의 지름이 될 정수 입력받아 diameter에 저장

	float radius = diameter / 2;

	printf("원의 넓이: %.2f\n원의 둘레: %.2f\n", PI * radius * radius, PI * diameter);

	printf("\n[문제4]\n");
	//문제4: 구구단 5단을 출력

	int five = 5;		//단이 될 정수값

	//변수에 해당하는 곱셈구구
	printf("%d * 1 = %d\n", five, five * 1);
	printf("%d * 2 = %d\n", five, five * 2);
	printf("%d * 3 = %d\n", five, five * 3);
	printf("%d * 4 = %d\n", five, five * 4);
	printf("%d * 5 = %d\n", five, five * 5);
	printf("%d * 6 = %d\n", five, five * 6);
	printf("%d * 7 = %d\n", five, five * 7);
	printf("%d * 8 = %d\n", five, five * 8);
	printf("%d * 9 = %d\n", five, five * 9);

	printf("\n[문제5]\n");
	//문제5: 사용자로부터 1~9 사이의 수를 입력받아 해당 구구단 출력

	int num;

	printf("1~9중 하나를 입력해주세요:\n");
	scanf_s("%d", &num);		//정수값을 입력받아 단이 될 변수 num에 저장

	//num에 해당하는 곱셈구구
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