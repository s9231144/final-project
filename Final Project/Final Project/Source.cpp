#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int main()
{

	srand(time(NULL));

	int n, count = 0;

	int min = 1, max = 99;

	int ran = rand() % 99 + 1;

	char c[2] = "y";
	system("color 70");
	
	do {
		
		printf("			此數字是介於 %d 和 %d\n\n", min, max);

		printf("			請輸入一個數字： ");

		scanf("%d", &n);

		if (n >= min && n <= max)
		{

			if (n > ran)
			{
				max = n ;
			}
			
			else if (n < ran)
			{
				min = n;
			}
			else 
			{
				

				printf("\n			猜對了!!!\n			共花了%d次\n			再試一次 (Y/N)? ",count+1);
				
				system("color 4F");
				Sleep(100);
				system("color 70");
				Sleep(100);
				system("color 4F");
				Sleep(100);
				system("color 70");

				ran = rand() % 99 + 1;

				count = 0;

				min = 1;

				max = 99;

				scanf("%s", &c);

			}

			count++;

		}

		else

			printf("			數值錯誤\n");

	} while (c[0] == 'y' || c[0] == 'Y');

	system("pause");

	return 0;
}
