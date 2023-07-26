 /* *****
    ****
    ***
    **
    * */
#include<stdio.h>
main()
{
int n;
printf("Enter any number:");
scanf("%d",&n);
for(int i = n ;i >0 ;i--)
{
	for(int j = 1 ;j <= i ;j++)
	printf("*");
	printf("\n");
}	
}    

