/*  aim : to print pattern
    EEEEE
    DDDD
    CCC
    BB
    A
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,f;
	char c;
	printf("enter a char :==");
	scanf("%c",&c);
	f=c;
	for(i=f; i>=65; i--)
	{
		for(j=i; j>=65; j--)
			printf("%c",i);
		printf("\n");
	}
	
}
