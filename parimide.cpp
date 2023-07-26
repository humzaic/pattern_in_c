#include<stdio.h>
main()
{      
	int choice;
	scanf("%d", &choice);
	for(int i = 0 ; i < choice ; i++)
	{
		for(int j = 0 ; j <= choice*2-1 ; j++)
		{
			if(j >= choice-i && j <= choice + i)
			printf("* ");
			else
			printf("  ");
		}
		printf("\n");
	}
}
