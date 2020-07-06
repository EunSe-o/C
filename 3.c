#include <stdio.h> //헤더파일 선언

int main(void) //main 함수의 시작
{
	int num, i; //변수 선언
	int total, f1, f2;
	int n1 = 1;
	int n2 = 1;

	printf("Input: ");
	scanf_s("%d", &num); //정수를 문자에 입력
	printf("%d %d ", n1, n2);

	total = n1 + n2; //f(3)
	f1 = n1; //f(1)
	f2 = n2; //f(2)
	for (i = 3; i <= num; i++) //for문 사용
	{
		printf("%d ", total); //f(n)항 출력
		f2 = f1; //f(n-2)
		f1 = total; //f(n-1)
		total = f1 + f2; //f(n)
	}
	printf("\n");
	return 0; //0의 반환
} //main 함수의 종료