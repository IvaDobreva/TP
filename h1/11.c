/*
Технологично училище "Електронни системи" към ТУ - София
www.elsys-bg.org
клас 11Б
номер 17
име Ива Йорданова Добрева

Задача: Да се разработи програма, която изисква от потребителя да въведе целочислено число х, където 0<x<10. Да се инициализира масив от 10 елемента. Да се намери сумата от cos(z) за всяко z в интервала [0;x) и да се запише като първи елемент в масива. Да се намери сумата от cos(z) за всяко z в интервала [x; 2x) и да се запише като втори елемент в масива. Аналогично да се намерят сумите на cos(z) за всички интервали [Nx; (N+1)x ) и да се запишат като елемент N в масива за всяко N в интервала [0, 10). Масивът да се изведе на стандартния изход.
*/

#include <stdio.h>
#include <math.h>

#define max 10

void fill_array(double array[], int x);

void print_array(double array[]);

int main() {
	int x;
	double array[max];
	do {
		printf("Enter number between 0 and 10: ");
		scanf("%d", &x);
	} while(x<=0 || x>=10);
	fill_array(array, x);
	print_array(array);

	return 0;
}

void fill_array(double array[], int x) {

	double sum=0;
	int index, i;
	int n=0;
	for (index=0; index<max; index++) {
		for(i=n*x; i<((n+1)*x); i++) {
			sum+=cos(i);
			
		}
		n++;
		array[index]=sum;
		
	}
}

void print_array(double array[]) {
	int index;
	for(index=0; index<max; index++) {
		printf("Element %d = %f\n", index, array[index]);
	}
}
