#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num=0;
	char c;
	
	printf("Input a string: ");
	
	while((c=getchar()) !='\n')
	{
		if ((c<=57)&&(c>=48))
		num++;
	}
	printf("The number of digit is %i",num);
	
	return 0;
}
