#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer=17;
	int trial=1;
	int a;
	
	do
	{
		printf("Guess the number: ");
		scanf("%i", &a);
		
		if (a<answer)
			printf("Low!\n");
		
		else if (a>answer)
		{
		
			printf("High!\n");		
		}
		else 
			break;
			
	trial++;

	} while (a=answer);
	
	printf("Congratulation! Trial: %i", trial);
	
	
	return 0;
}
