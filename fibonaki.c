/*  aim : print fibonaki series.
	0,1,1,2,3,5,8,13,...
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,a=0,b=1,c=0;
	printf("enter a num :== ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		if(i<=1)
		{
			printf("%d",i);
		}
		else
		{
			a=c;
			c=b;
			b=a+c;
			printf("%d",b);
		}
	}
}
