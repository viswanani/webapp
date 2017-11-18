#include < stdio.h>
#include <conio.h>
void main() 
{
	int a,b,sum,mul,div,sub;
	
	
		printf("enter the values of a and b");
	        scanf("%d %d" ,&a,&b);
	        sum= a+b;
		sub=a-b;
		div=a/b;
		mul=a*b;

                printf("%d" ,sum);
		printf("%d" ,div);
		printf("%d" ,mul);
		printf("%d" ,sub);

	getch ();
}
