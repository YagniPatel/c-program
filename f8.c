#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	c=1;
	printf("Enter a number : ");
	scanf("%d", &a);
	for(b=1;b<=a;b++)
	{
		c*=b;
	}
	printf("factorial of %d is %d",a,c);	
}
