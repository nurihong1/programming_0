#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo (int a, int b)
{
	return(a+b);
}
int square(int a)
{
	return(a*a);
}
int get_max(int a, int b)
{
	if(a>b) return (a);
	else return (b);
}

int main(void) {
	
	int a,b,c,d,e;
	
	printf("Enter the integers: ");
	scanf("%i %i", &a, &b);
	
	printf("Result - ");
	c=sumTwo(a,b);
	printf("%i, ", c);
	d=square(a);
	printf("%i, ", d);
	e=get_max(a,b);
	printf("%i", e);
	
	return 0;
}
