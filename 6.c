#include <stdio.h> //�ǽ� 7-1 ���Ƿ� �߻���Ų ���� ���߱�
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i, ranNum, num = 0;
	srand((unsigned)time(NULL)); //���� �ʱ�ȭ
	ranNum = (rand() % 10) + 1;

	for (i = 0;; i++)
	{
		printf("Input <1~10>: ");
		scanf_s("%d", &num);

		if (num > ranNum)
			printf("random number�� %d���� �۽��ϴ�.\n", num);
		else if (num < ranNum)
			printf("random number�� %d���� Ů�ϴ�.\n", num);
		else if(num == ranNum)
		{
			printf("random number�� %d�Դϴ�.\n", num);
			break;
		}
	}
		return 0;
}