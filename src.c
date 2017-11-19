#include < stdio.h>
#include <conio.h>
void main() 
{
	int a,b,sum,mul,sub;
	float div,square;
	
	
		printf("enter the values of a and b");
	        scanf ("%d %d" ,&a,&b);
	        sum= a+b;
		sub= a-b;
		div= a/b;
		mul= a*b;
		square=sqrt(a);
		if (a=2)
		{
			printf("number is a prime number");
		}
		else 
			(a%2==0)
			{
				printf("number is not a prime number");
			}
		
		printf("%d" ,sum);
		printf("%f" ,div);
		printf("%d" ,mul);
		printf("%d" ,sub);

	getch ();
}
