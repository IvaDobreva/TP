#include <stdio.h>

int x, y;

void check();

main() {
	
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

