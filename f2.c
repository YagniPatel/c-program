#include<stdio.h>
#include<conio.h>
void main() {
	int a,x,y;
	do {	
		printf("Enter 1 for addition :\nEnter 2 for subtraction :\nEnter 0 for exit");
		scanf("%d", &a);
		switch(a) {
			case 0:return;
			case 1:printf("Enter two numbers : ");
					scanf("%d %d", &x,&y);
					printf("addition of %d & %d is %d .\n" ,x,y,x+y); 
					break;
			case 2:printf("Enter two numbers : ");
					scanf("%d %d", &x,&y);
					printf("addition of %d & %d is %d .\n" ,x,y,x-y);
					break;
		}
			
	} while(1);//a=1 => 1!=0 => true
}


