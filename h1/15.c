/*
Технологично училище "Електронни системи" към ТУ - София
www.elsys-bg.org
клас 11Б
номер 17
име Ива Йорданова Добрева

Задача: Да се разработи програма, която изисква от потребителя да въведе целочислено число x, където 0<x<10. Да се инициализира масив от 10 елемента. Да се намери първото число на Фибоначи в интервала [0; +∞) завършващо на x и да се запише като първи елемент в масива. Да се намери второто число на Фибоначи в интервала [0;  +∞) завършващо на x и да се запише като втори елемент в масива. Аналогично да се намерят първите N прости числа в интервала [0;  +∞) и да се запишат като елемент N в масива. Масивът да се изведе на стандартния изход.
*/

#include <stdio.h>

#define max 10

void array_fill(long array[], int x);

int fibonacci_check(int x, long result);

void print_array(long array[]);

int main() {
	int x;
	long array[max];	

	do {
		printf("Enter number between 0 and 10: ");
		scanf("%d", &x);
	}while (x<=0 || x>=10);
	
	array_fill(array, x);
	print_array(array);

	return 0;
}

void array_fill(long array[], int x) {
	int index, i=1;
	int fnum1=0;
	int fnum2=1;
	long result=1;
	for(index=0; index<max; index++) {
		while(i==1) {
			result=fnum1+fnum2;
			fnum1=fnum2;
			fnum2=result;
			i=fibonacci_check(x, result);
		}
		array[index]=result;
		i=1;
	}
}

int fibonacci_check(int x, long result) {
	if(result%10==x){
		return 0;
	}
	return 1;
}

void print_array(long array[]) {
	int index;
	for(index=0; index<max; index++) {
		printf("Element %d = %ld\n", index, array[index]);
	}
}
