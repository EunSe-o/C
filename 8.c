#include <stdio.h> //실습 7-4 임의의 양의 정수를 입력 받아 
//7로 나누었을 때 나머지에 해당하는 숫자의 배열에 *3한 값을 저장한다.

int main(void)
{
	int i, input, index = 0;
	int num[7] = { 0 };
	int* pNum = num;

	printf("일곱 개의 정수 입력 : ");
	for (i = 0; i < 7; i++)
		scanf_s("%d", pNum + i);

	for (i = 0; ; i++)
	{
		printf("임의의 양의 정수 입력(-1 : 종료): ");
		scanf_s("%d", &input);

		if (input == -1)
			break;

		printf("입력 값: %d\t", input);
		index = input % 7; //7로 나눈 나머지를 index에 저장
		printf("index값: %d\n", index);

		*(pNum + index) *= 3; //index번째에 해당하는 배열의 수에 *3
	}
	printf("결과: ");
	for (i = 0; i < 7; i++)
		printf("%d ", *(pNum + i));

	return 0;
}