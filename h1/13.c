/*
Технологично училище "Електронни системи" към ТУ - София
www.elsys-bg.org
клас 11Б
номер 17
име Ива Йорданова Добрева

Задача: Да се разработи програма, която изисква от потребителя да въведе целочислено число x, където 0<x<10. Да се инициализира масив от 10 елемента. Да се намери сумата от всички числа в интервала [0; 1000) делящи се на x и да се запише като първа стойност в масива. Да се намери сумата от всички числа в интервала [0;1000) деляща се на 2x и да се запише като втора стойност в масива. Аналогично да се намери сумата на всички числа делящи се на Nx за N в интервала [1;10] и да се запишат като елемент N-1 в масива. Масивът да се изведе на стандартния изход.
*/

#include <stdio.h>

#define max 10

void fill_array(int array[], int x);

int find_sum(int x, int i);

void print_array(int array[]);

int main() {
	int x;
	int array[max];

	do {
		printf("Enter number between 0 and 10: ");
		scanf("%d", &x);
	}while (x<=0 || x>=10);
	fill_array(array, x);
	print_array(array);

	return 0;
}

void fill_array(int array[], int x) {
	int index, i=1, sum;
	for(index=0; index<max; index++) {
		sum=find_sum(x, i);
		array[index]=sum;
		i++;
	}
}

int find_sum(int x, int i) {
	int n;
	int sum=0;
	for(n=0; n<1000; n++) {
		if((n%(i*x))==0) {
			sum+=n;
		}
	}
	
	return sum;
}

void print_array(int array[]) {
	int index;
	for(index=0; index<max; index++) {
		printf("Element %d = %d\n", index, array[index] );
	}
}
