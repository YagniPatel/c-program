#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],b,c,d;
	
	for(b=0; b<5; b++)
	{
		printf("enter a %d num = ", b+1);
		scanf("%d", &a[b]);
	}
	for(b=0; b<5; b++)
	{
		for(c=b+1; c<5; c++)
		{
			if(a[c]>a[b])
			{
				d=a[c];
				a[c]=a[b];
				a[b]=d;
			}
		}
		printf("%d",a[b]);
	}
}
