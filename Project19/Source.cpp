#include <stdio.h>
#include <time.h>
#include <iostream>

void main()
{
	srand(time(NULL));
	/*
		int A[8], dec = 0;
		for (int i = 0; i < 8; i++)
		{
			A[i] = 0 + rand() % 2;
			printf("A[%d]=%d", i, A[i]);
		}

		for (int i = 0; i < 8; i++)
		{



		}
		*/

		/*
			int A[10][10] = { 0 }, min = 10, max = 0;
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					A[i][j] = 0 + rand() % 10;
					printf("%d\t", A[i][j]);
				}

				printf("\n\n");
			}


			for (int i = 0; i < 10; i++)
			{
				min = 10;
				for (int j = 0; j < 10; j++)
				{
					if (A[i][j] < min)
						min = A[i][j];
				}

				printf("%d, ", min);

				if (min > max)
					max = min;
			}

			printf("\nmax %d\n", max);
			*/


			/////////////////////////////////////////////////

		/*
			int A[5][5] = { 0 }, B[5][5] = {0},x,x1;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					A[i][j] = 10 + rand() % 40;
					printf("%d\t", A[i][j]);
				}

				printf("\n\n");
			}


			printf("\n\n");


			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					x = A[i][j] / 10;
					x1 = A[i][j] % 10;
					B[i][j] = x1*10 + x;
					printf("%d\t", B[i][j]);
				}
				printf("\n\n");

			}



		*/


	int A[5][5] = { 0 }, count = 0, B[5][5] = { 0 };
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			A[i][j] = 10 + rand() % 40;
			printf("%d\t", A[i][j]);
		}

		printf("\n\n");
	}
	for (int k = 0; k < 5; k++)
	{
		for (int p = 0; p < 5; p++)
		{
			count = 0;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					if (A[k][p] == A[i][j])// && A[k][p]!=0
						count++;
				}
			}

			if (count - 1 >= 2)
			{
				for (int i = 0; i < 5; i++)
				{
					for (int j = 0; j < 5; j++)
					{
						if (A[k][p] == A[i][j])
							B[i][j] = -1;
					}
				}
			}

		}
	}

	for (int k = 0; k < 5; k++)
	{
		for (int p = 0; p < 5; p++)
		{
			if (B[k][p] == -1)
				A[k][p] = 0;
		}
	}

	printf("\n-----------------\n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{

			printf("%d\t", B[i][j]);
		}


		printf("\n\n");
	}


	system("pause");
}
