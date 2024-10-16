#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int combination(int n, int r)
{
	return (factorial(n)/factorial(n-r)/factorial(r));
}

int factorial(int n)
{
	int i;
	int res=1;
	for (i=1;i<=n;i++)
	 res*=i;
	return res;
}

int get_integer()
{
	int n;
	printf("Enter the value: ");
	scanf("%i", &n);
	return (n);
}

int main(void) 
{
	int z,x,n,r,result;
	
	z=get_integer(n);
	x=get_integer(r);
	result=combination(z,x);
	printf("The result of C(%i,%i) is %i", z,x,result);
	
	
	
	return 0;
}
