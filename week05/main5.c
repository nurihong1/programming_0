#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x,y;
	int aand,oor,nnot,up,down;
	
	
	printf("Input two integers: ");
	scanf("%i %i", &x, &y);
	
	aand=x&y;
	oor=x|y;
	nnot=x^y;
	up=x<<1;
	down=x>>1;
	
	printf("& result is %i\n", aand);
	printf("| result is %i\n", oor);
	printf("^ result is %i\n", nnot);
	printf("<<1 result is %i\n", up);
	printf(">>1 result is %i\n", down);
	
	return 0;
}
