#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
struct point {
	int x;
	int y;
};
int getArea(struct point p1, struct point p2){
	int arr=(p2.x-p1.x)*(p2.y-p1.y);
	return arr;
}

int main(int argc, char *argv[]) {
	struct point p1,p2;
	
	printf("Input the coordinate p1 (x y): ");
	scanf("%i %i", &p1.x,&p1.y);
	printf("Input the coordinate p2 (x y): ");
	scanf("%i %i", &p2.x,&p2.y);
	
	int area = getArea(p1,p2);
	printf("Area: %i", area);
	return 0;
}*/

struct point {
	int x;
	int y;
};
int getArea(struct point *pPtr1, struct point *pPtr2){
	int arr=(pPtr2->x-pPtr1->x)*(pPtr2->y-pPtr1->y);
	return arr;
}

int main(int argc, char *argv[]) {
	struct point p1,p2;
	struct point *pPtr1, *pPtr2;
	pPtr1=&p1;
	pPtr2=&p2;
	
	printf("Input the coordinate p1 (x y): ");
	scanf("%i %i", &pPtr1->x,&pPtr1->y);
	printf("Input the coordinate p2 (x y): ");
	scanf("%i %i", &pPtr2->x,&pPtr2->y);
	
	int area = getArea(pPtr1,pPtr2);
	printf("Area: %i", area);
	return 0;
}
