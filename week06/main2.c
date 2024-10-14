#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int d;
	
	printf("Enter an integer: ");
	scanf("%i", &d);
	
	if (d<0)
	printf("%i",-d);
	
	else printf("%i",d);
	
	return 0;
}
