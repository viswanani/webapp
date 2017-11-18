#include < stdio.h>
#include <conio.h>
void main() 
{
	int a,b,sum,mul,sub;
	float div;
	
	
		printf("enter the values of a and b");
	        scanf("%d %d" ,&a,&b);
	        sum= a+b;
		sub=a-b;
		div=a/b;
		mul=a*b;

                printf("%d" ,sum);
		printf("%f" ,div);
		printf("%d" ,mul);
		printf("%d" ,sub);

	getch ();
}
