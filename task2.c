#include <stdio.h>

int x, y;

void check();

main() {
	
	long sum =0;
	
	check();
	while (x<=y) {
		if(x%17==0) {
			sum+=x;
		}
		x++;
	}
	printf("Sum is: %ld\n", sum);
	return 0;
}

void check() {
	
	printf("Enter Y>X:\n");
	scanf("%d", &y);
	if(x>=y) {
		check();
	}
}

