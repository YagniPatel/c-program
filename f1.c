#include<stdio.h>
//#include<conio.h>
void main()
{
	int a,x,y;
	do
	{	
		printf("Enter 1 for addition :\nEnter 2 for subtraction :\n");
		scanf("%d", &a);
		printf("Enter two numbers : ");
		scanf("%d\n%d", &x,&y);
		if(a==1)
		{
			printf("addition of %d & %d is %d ." ,x,y,x+y);
		}
		else if(a==2)
		{
			printf("addition of %d & %d is %d ." ,x,y,x-y);
		}			
	}
	while(1);
	getch();
}
