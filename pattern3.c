/* aim : to print pattern
   A B C D E F G G F E D C B A
     A B C D E F F E D C B A
       A B C D E E D C B A 
         A B C D D C B A
           A B C C B A
             A B B A
               A A
                A 
*/
      
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,l,f;
	char c;
	printf("enter a char :==");
	scanf("%c",&c);
	f=c;
	
	for(i=65; i<=c+1; i++)
	{
		for(k=i; k>65; k--)
			printf("  ");			
		for(j=65; j<=f; j++)
			printf(" %c",j);
		for(l=f; l>=65; l--)
			printf(" %c",l);
		if(i==c+1)
			printf("A");
		printf("\n");

		f--;
	}
}
