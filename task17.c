#include <stdio.h>

int prime_num(int num);

float sum_twins(float num, float num2);

int main() {
	float x;
	float p=3;
	float q=p+2;	
	float num=1/p;
	float num2=1/q;
	float sum=num2+num;	

	do {
		printf("Enter number between 0 and 1: ");
		scanf("%f", &x);
	} while(x<0 || x>1);
	
	while(sum>x) {
		
		p+=2;
		q+=2;
		if((prime_num(p)==0 )||(prime_num(q)==0)) {
			num=(1/p);
			num2=(1/q);
			sum=sum_twins(num, num2);
			
		}
	}

	printf("Program stopped at twins %.0f and %.0f\n", p, q);
	return 0;
}

int prime_num(int num) {
	int c;
	
	for(c=2; c<=num-1; c++){
		if ( num%c == 0 ) {
	 		return 1;
      		}
   	}
   	if (c == num) {
		return 0;
	}
	else {
		return 1;
	}
}

float sum_twins(float num, float num2) {

	float sum=(num+num2);
	
	return sum;
}
