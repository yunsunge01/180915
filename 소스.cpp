#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void game(int n)
{
	int com;
	int count = 0;
	int user;

	com = rand() % n + 1;

		printf("1���� 100������ ���� �Է��ϼ���\n");
	while (1)
	{
		scanf("%d", &user);

		if (user < 1 || user>n)
		{
			printf("�ٽ� �Է��ϼ���");
		}
		else
		{
			count++;
			if (user > com)
			{
				printf("down");
			}
			else if (user < com)
			{
				printf("up");
			}
			else
			{
				printf("����\n ");
				printf("%d�� ���� ����\n", count);
				break;

			}
		}

	}
}



//int main()
//{
//	srand(time(NULL));
//
//		int n = 100;
//	while (1) 
//	{
//		printf("1�� �����ϱ�\n");
//		printf("2�� ������");
//		int ch;
//		scanf("%d", &ch);
//		
//		if (ch == 2)
//		{
//			break;
//		}
//		
//		switch (ch)
//		{
//		case 1:
//			game(n);
//			break;
//		}
//		n = n + 100;
//	}
//
//	return 0;
//}


int main()
{
	srand(time(NULL));
	int f[25];
	int x;
	int y;
	int i;
	int bingo[5][5];

	for (i = 0; i < 25; i++)   
	{  
		f[i] = rand()% 25 + 1;
		for (int j = 0; j < i; j++)
		{
			if (f[j] == f[i])
			{
				i--;
				break;
			}
		}

	}
	int idx=0;

	for (y = 0; y < 5; y++)
	{
		for (x = 0; x < 5; x++)
		{
			bingo[y][x] = f[idx++];
		}
	}

	for (y = 0; y < 5; y++)
	{
		for (x = 0; x < 5; x++)
		{
			printf("%4d", bingo[y][x]);
		}
		printf("\n");
	}

	return 0;
	
}