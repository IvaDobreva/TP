/*
Технологично училище "Електронни системи" към ТУ - София
www.elsys-bg.org
клас 11Б
номер 17
име Ива Йорданова Добрева

Задача: Да се разработи програма,  която изисква от потребителя да въведе четири числа x, y, w, h където x>0, y>0, w>0, h>0. Числото x е дължината на плоча дървесина, а числото y е височината. Да се определи на колко цели плочи с размери w, h може да се разреже голямата плоча. Да се инициализира масив от 10 елемента. Стойностите на елементите на масива да са първите 10 координати по дължина на плочата, в които тя трябва да се разреже, за да се получат по-малките плочи.
*/

#include <stdio.h>

#define Max 10

int values();
void tiles(int array[], int x, int y, int w, int h );

int main() {
	int x, y, w, h;
	int array[Max];	

	x=values();
	y=values();
	w=values();
	h=values();
	
	tiles(array, x, y, w, h);
	
	return 0;
}

int values() {
	int x=0;

	do {
		printf("Enter value: ");
		scanf("%d", &x);
	} while(x<0);

	return x;
}

void tiles(int array[], int x, int y, int w, int h) {
	int index;
	int nw, mh, c=0;

	nw=x/w;
	mh=y/h;

	printf("The number of tiles is: %d\n", nw*mh);

	for(index=0; index<nw; index++) {
		c=c+w;		
		array[index]=c;
		printf("Tile %d x = %d\n", index+1, array[index]);
	}
	
}
