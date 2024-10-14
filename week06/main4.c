#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sum=0;
	int d;
	int b;
	
	printf("enter a number: ");
	scanf("%i", &d);
	
	for(b=0;d>=b;b++)
	sum+=b;
	
	printf("The result is %i", sum);
	return 0;
}
