#include <stdio.h>

void sequence(float x);

void main() {
	float x;
	do {
		printf("Enter number 0<x<1: ");
		scanf("%f", &x);
	} while(x<=0 || x>=1);
	sequence(x);
}

void sequence(float x) {
	float p = 4;
	float n = 3;
	int f = 1;
	
	for(n=3; 4/n>x; n+=2){
		if(f==0) {
			p+=(4/n);
			f=1;		
		}
		else if(f==1) {
			p-=(4/n);
			f=0;
		}
		
	}
	printf("Result is %f\n", p);
}
