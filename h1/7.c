/*
Технологично училище "Електронни системи" към ТУ - София
www.elsys-bg.org
клас 11Б
номер 17
име Ива Йорданова Добрева

Задача: Да се разработи програма, която изисква от потребителя да въведе целочислено число x, където 0<=x<10. Да се инициализира масив от 10 елемента. Да се намерят първите 10 стойности на функцията cos(x) в интервала [0; +∞), в които третата цифра след десетичната запетая е x. Пример при cos(1) = 0.540302306 третата цифра след десетичната запетая е 0. При cos(2) = -0.416146837 третата цифра след десетичната запетая е 6. Намерените стойности да се зададат като стойности на елементите в масива. Елементите на масива да се изведат на стандартния изход.
*/

#include <stdio.h>
#include <math.h>

#define max 10

void array_fill(double array[], int x);

void print_array(double array[]);

int main() {
	int x;
	double array[max];
	do {
		printf("Enter number 0<=x<10: ");
		scanf("%d", &x);
	} while (x<0 || x>10);
	array_fill(array, x);
	print_array(array);

	return 0;
}

void array_fill(double array[], int x) {
	int index=0;
	int number=0;
	double result, decResult;
	do {
		result=cos(number);
		decResult=result*1000;
		if((int) decResult%10 == x) {
			array[index]=result;
			index++;
		}
		
		number++;
	} while(index<max);
}

void print_array(double array[]) {
	int index;
	for(index=0; index<max; index++) {
		printf("%f\n", array[index]);
	}
}
