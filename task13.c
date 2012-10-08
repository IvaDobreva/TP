#include <stdio.h>

#define max 10

void fill_array(int array[], int x);

int find_sum(int x, int i);

void print_array(int array[]);

void main() {
	int x;
	int array[max];

	do {
		printf("Enter number between 0 and 10: ");
		scanf("%d", &x);
	}while (x<=0 || x>=10);
	fill_array(array, x);
	print_array(array);
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
