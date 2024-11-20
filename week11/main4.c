#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	char str[30]= "happy C programming";
	int strlength;
	
	strlength=strlen(str);
	
	printf("문자열\"%s\"의 길이: %i", str, strlength);
}
