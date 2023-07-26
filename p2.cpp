/* *
   **
   ***
   ****
   *****
   */
#include<stdio.h>
main()
{
	int n;
printf("Enter any number:");
scanf("%d",&n);
for(int i = 1 ;i <=5 ;i++)
{
	for(int j = 1 ;j <= i ;j++)
	printf("*");
	printf("\n");
}	
}   
