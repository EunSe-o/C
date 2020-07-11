#include <stdio.h> //실습 7-1 임의로 발생시킨 난수 맞추기
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i, ranNum, num = 0;
	srand((unsigned)time(NULL)); //난수 초기화
	ranNum = (rand() % 10) + 1;

	for (i = 0;; i++)
	{
		printf("Input <1~10>: ");
		scanf_s("%d", &num);

		if (num > ranNum)
			printf("random number는 %d보다 작습니다.\n", num);
		else if (num < ranNum)
			printf("random number는 %d보다 큽니다.\n", num);
		else if(num == ranNum)
		{
			printf("random number는 %d입니다.\n", num);
			break;
		}
	}
		return 0;
}