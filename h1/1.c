/*
Технологично училище "Електронни системи" към ТУ - София
www.elsys-bg.org
клас 11Б
номер 17
име Ива Йорданова Добрева

Задача: Да се разработи програма, която изисква от потребителя да въведе две целочислени числа, x и y, където x < y. Да се намери сумата на всички нечетни числа в интервала [x,y].
*/


#include <stdio.h>

int x, y;

void check();

int main() {
	
	long sum =0;
	
	check();

	while(x<=y) {
		if(x%2 != 0) {
			sum+=x;	
		}
		x++;
	}

	printf("Sum is: %ld\n", sum);
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

