/*
Технологично училище "Електронни системи" към ТУ - София
www.elsys-bg.org
клас 11Б
номер 17
име Ива Йорданова Добрева

Задача: Да се разработи програма, която изисква от потребителя да въведе число x, където 0<x<1. Да се намери числото пи чрез следното развитие в ред: 4-4/3+4/5-4/7+4/9-4/11+...4/N. Развитието в ред спира при 4/N<x. Получената стойност за пи да се изведе на екрана.
*/

#include <stdio.h>

void sequence(float x);

int main() {
	float x;
	do {
		printf("Enter number 0<x<1: ");
		scanf("%f", &x);
	} while(x<=0 || x>=1);
	sequence(x);

	return 0;
}

void sequence(float x) {
	float p = 4;
	float n = 3;
	int f = 1;
	
	for(n=3; 4/n>x; n+=2){
		if(f==0) {
			p+=(4/n);
			f=1;		
		}
		else if(f==1) {
			p-=(4/n);
			f=0;
		}
		
	}
	printf("Result is %f\n", p);
}
