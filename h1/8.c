/*
Технологично училище "Електронни системи" към ТУ - София
www.elsys-bg.org
клас 11Б
номер 17
име Ива Йорданова Добрева

Задача: Да се разработи програма, която изисква от потребителя да въведе целочислено число x, където 0<=x<10. Да се инициализира масив от 10 елемента. Да се намерят първите 10 числа на Фибоначи в [0; +∞), които се делят на x без остатък. Намерените стойности да се зададат като стойности на елементите в масива. Елементите на масива да се изведат на стандартния изход.
*/

#include <stdio.h>

#define max 10

void array_fill(int array[], int x);
void print_array(int array[]);

int main() {
	int array[max];
	int x;
	do {
		printf("Enter 0<=x<10: ");
		scanf("%d", &x);
	} while(x<0 || x>=10);
	array_fill(array, x);
	print_array(array);
	
	return 0;
}

void array_fill(int array[], int x) {
	int index=0;
	int fnum1=0;
	int fnum2=1;
	long result=1;
	while(index<max) {
		if(result%x==0) {
			array[index]=result;
			index++;
		}
		result=fnum1+fnum2;
		fnum1=fnum2;
		fnum2=result;
	}
}

void print_array(int array[]) {
	int index;
	for(index=0; index<max; index++) {
		printf("%d\n", array[index]);
	}
}
