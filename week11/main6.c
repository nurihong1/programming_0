#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
void main(void) {
	FILE* fp=NULL;
	char c;
	fp = fopen("sample.txt","r");
	if (fp==NULL){
	 printf("파일을 못열음\n");
}
	while((c=fgetc(fp))!= EOF){
	 putchar(c);
}
	fclose(fp);
}
*/
void main(void) {
	FILE* fp=NULL;
	char str[100];
	fp = fopen("sample.txt","r");
	if (fp==NULL){
	 printf("파일을 못열음\n");
}
	while((fgets(str,sizeof(str),fp))!= NULL){
	 printf("%s",str);
}
	fclose(fp);
}
