#include <stdio.h>

int x, y;

void end3();

void check();

void prime();

int main() {
	check();
	for (x; x<=y; x++) {
		prime();
	}
	return 0;
}

void end3() {
	if(x/10 == 3) {
		printf("%d\n", x);
	}
	else if(x%10 == 3) {
		printf("%d\n", x);
	}
}

void check() {
	printf("Enter X:\n");
	scanf("%d", &x);
	printf("Enter Y>X:\n");
	scanf("%d", &y);
	if(x>=y) {
		check();
	}
}

void prime() {
	int divider = 1;
	int counter = 0;

	while(divider<=x) {
		if(x%divider == 0) {
			counter +=1;		
		}
		divider++;
	}
	if(counter == 2) {
		end3();
	}
}
