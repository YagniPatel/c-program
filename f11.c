#include<stdio.h>
#include<conio.h>
void main()
{
	int a[30],b[11]={0},i,j,p,q;
	printf("Enter a marks : ");
	
	for(i=0; i<30; i++)
	{
		scanf("%d", &a[i]);
		a[i]/=10;
	}
	printf("number\t\t range\t\t count");
	
	for(j=0,p=0,q=9; j<11,p<=90,q<=99; j++,p=p+10,q=q+10)
	{
		for(i=0; i<30; i++)
		{
			if(a[i]==j)
				b[j]++;
		}
		
		if(j==10)
			printf("\n%d\t\t 100\t\t %d \n",j+1,b[j]);
		else 
			printf("\n%d\t\t%d to %d\t\t %d \n",j+1,p,q,b[j]);
	}
}
//34 26 78 98 67 12 90 100 87 67 34 78 20 65 85 98 54 87 50 38 69 40 38 59 20 38 49 36 89 49

