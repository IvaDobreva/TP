#include <stdio.h>

#define max 10

void fill_array(int array[], int x);

int find_n(int x, int n);

void print_array(int array[]);

void main() {
	int x, n;
	int array[max];

	do {
		printf("Enter number between 0 and 10: ");
		scanf("%d", &x);
	}while (x<=0 || x>=10);
	fill_array(array, x);
	print_array(array);
}

void fill_array(int array[], int x) {
	int index, sum=0, i;
	int n=1;
	for(index=0; index<max; index++) {
		n=find_n(x, n);
		for(i=0; i<=n; i++) {
			sum+=i;
		}
		array[index]=sum;
	}
}

int find_n(int x, int n) {
	while(n%x!=0) {
		n++;
	}
	return n;
}

void print_array(int array[]) {
	int index;
	for(index=0; index<max; index++) {
		printf("Element %d = %d\n", index, array[index] );
	}
}
