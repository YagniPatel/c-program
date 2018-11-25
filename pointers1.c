#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int * func1(int);  //space allocation
void func2(int *,int);  //read input
int * func3(int *,int);  //copy array and short
void func4(int *,int);  //print

void main()
{
	int size;
	int *x,*y;
	printf("Enter a size of array :== ");
	scanf("%d", &size);
	x=func1(size);
	func2(x, size);
	func4(x, size);
	y=func3(x, size);
	func4(y, size);
}

int * func1(int size)
{
	int *p;
	p=(int *)calloc(size,sizeof(int));
	return p;
}

void func2(int *p,int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		scanf("%d", p+i);
	}
}

int * func3(int *p, int size)
{
	int *q=(int *)calloc(size,sizeof(int));
	int i,j,a;

    *q = *p;
    for(i=1; i<size; i++){
    	for (j=i-1; ( j >= 0  && *(q+j) > *(p+i)); j--) 
       		*(q+j+1) = *(q+j); 
       	//printf("j = %d %d\n",j, *(q+j));
    	*(q+j+1) = p[i];
    }
	return q;
}

void func4(int *q, int size)
{   
	int i;
	for(i=0; i<size; i++)
		printf("%d, ",*(q+i));

	printf("\n");	
}
