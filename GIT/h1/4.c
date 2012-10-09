/*
Технологично училище "Електронни системи" към ТУ - София
www.elsys-bg.org
клас 11Б
номер 17
име Ива Йорданова Добрева

Задача: Да се разработи програма, която изисква от потребителя да въведе две целочислени числа, x и y, където x < y. Да се намерят и изведат всички числа на Фибоначи в интервала [x, y].
*/


#include <stdio.h>

int x, y;

void check();

void fibonacci();

int main() {
	check();
	fibonacci();

	return 0;
}

void check() {
	printf("Enter X:\n");
	scanf("%d", &x);
	printf("Enter Y>X:\n");
	scanf("%d", &y);
	if(x>=y) {
		check(x, y);
	}
}

void fibonacci() {
	int num, counter=1;
	int a=0, b=1, c=1;
	
	for(num=0; num<y; num++) {
		if(counter>=x) {
			printf("%d\n", c);
		}
		c=a+b;
		a=b;
		b=c;
		counter++;
	}
}
