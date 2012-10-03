#include <stdio.h>

#define max 10 // Defines max elements in the array

void array_fill(int array[], int x); //Array fill

int prime(int n, int x); //Finds next prime number

int check(int n, int x); // Checks if the number is ending with x 

void print_array(int array[]); // Prints array

int main() {
	int x;
	int array[max];	

	do {
		printf("Enter number between 0 and 10: ");
		scanf("%d", &x);
	}while (x<=0 || x>=10);
	if(x%2==0) {
		if(x==2){
			printf("The only number ending on 2 is: 2\n");
		}
		else {
		printf("There is no such number.\n");
		}
		return 0;
	}
	array_fill(array, x);
	print_array(array);
	return 0;
}

void array_fill(int array[], int x) {
	int index;
	int i=1; 	//returned value from prime number	
	int n=2;

	for(index=0; index<max; index++) {
		while(prime(n, x)==1) {
			n++;
		}
		array[index]=n;
		n++;
		i=1;
	}
}

int prime(int n, int x) {
	int c;
	int counter=0;
	for(c=2; c<=n-1; c++){
		if ( n%c == 0 ) {
	 		break;
      		}
   	}
   	if ((c == n) && (check(n, x)==0)) {
		return 0;
	}
	else {
		return 1;
	}
}

int check(int n, int x) {
	if(n%10==x) {
		return 0;
	}
	return 1;
}

void print_array(int array[]) {
	int index;
	for(index=0; index<max; index++) {
		printf("Element %d = %d\n", index, array[index] );
	}
}
