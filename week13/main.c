#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student {
	int    ID;
	char   name[10];
	double grade;	
};
int main(void) {
	struct student s1={24, "Eunju", 4.3};
	struct student s;
	
	printf("Input the ID: ",s.ID);
	scanf("%i", &s.ID);
	printf("Input the name: ",s.name);
	scanf("%s", &s.name);
	printf("Input the grade: ",s.grade);
	scanf("%lf", &s.grade);
	
	printf("ID: %d\n", s.ID);
	printf("name: %s\n", s.name);
	printf("grade: %f", s.grade);
	return 0;
}
