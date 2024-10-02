#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x,y;
	int sum, min, mul, div, last;
	
	
	printf("input two integers: ");
	scanf("%i %i", &x, &y);
	
	sum=x+y;
	min=x-y;
	mul=x*y;
	div=x/y;
	last=x%y;
	
	printf("+ result is %i\n", sum);
	printf("- result is %i\n", min);
	printf("* result is %i\n", mul);
	printf("/ result is %i\n", div);
	printf("%% result is %i", last);
	
	return 0;
}
