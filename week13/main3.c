#include <stdio.h>
#include <stdlib.h>
#define STUDENTNUM 4

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	
	int ID;
	int score;
	
};
void main(void) {
	
	struct  student s[STUDENTNUM];
	double sum=0;
	int i,max=0;
	
	for (i=0;i<STUDENTNUM;i++){
		printf("Input the ID: ");
		scanf("%i", &s[i].ID);
		printf("Input the score: ");
		scanf("%i",&s[i].score);
		sum+=s[i].score;
	}

	for(i=1;i<STUDENTNUM;i++){
		if(s[i].score>s[max].score){
			max=i;
		}
	}
	printf("The average of the score: %f\n", sum/4);
	printf("The highest score - ID: %i, score: %i", s[max].ID, s[max].score);
	
	return 0;
}
