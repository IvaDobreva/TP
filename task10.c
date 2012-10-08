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
