#include <stdio.h>
#include <stdbool.h>

#define NUM_RANKS (13)
#define NUM_SUITS (4)
#define NUM_CARDS (5)

int num_in_rank[NUM_RANKS];
int num_in_suit[NUM_SUITS];

bool straight, flush, four, three;
int pairs;

void in_hand(void);
void classify(void);
void result(void);

void in_hand(void)
{
	char rank, suit;
	int r, s;
	printf("Please enter your card : "); 

	for(int i=0; i < NUM_CARDS ; i++)
	{
		scanf("%c%c", &rank, &suit); //카드 입력

		switch(rank)
		{
			case '2': r=0; break;
			case '3': r=1; break;
			case '4': r=2; break;
			case '5': r=3; break;
			case '6': r=4; break;
			case '7': r=5; break;
			case '8': r=6; break;
			case '9': r=7; break;
			case '0': r=8; break;
			case 'A': r=9; break;
			case 'K': r=10; break;
			case 'Q': r=11; break;
			case 'J': r=12; break;
			default: printf("Not exist"); break;
		}

		switch(suit)
		{
			case'D': s=0; break;
			case'S': s=1; break;
			case'C': s=2; break;
			case'H': s=3; break;
			default: printf("Not exist"); break;
		}

		for(int j=0; j < NUM_RANKS ; j++)
		{
			if(r==j)
				num_in_rank[j]++; //입력 rank에 해당되는 배열에 +1 (전역변수는 0으로 초기화됨을 이용)
		}

		for(int j=0; j < NUM_SUITS ; j++)
		{
			if(s==j)
				num_in_suit[j]++; //입력 suit에 해당되는 배열에 +1 (전역변수는 0으로 초기화됨을 이용)
		}

	} //for문의 종료
}//in_hand함수의 종료
