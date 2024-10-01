/* Author: Malachy Crossan
 * Date: 9-30-24
 * Class: EGN3211-0002
 * Assignment: 3 
 * Problem #2 – Create a custom power function taking two
 * integers as input (aka without math.h). Take input from
 * the keyboard as inputs to send to the function. Compare
 * the results to the built in function (within math.h) */

#include <stdio.h>
#include <math.h>

int power (int a, int b) {
	int r = 1;
	while (b != 0) {
		if (b < 0) { r /= a; b++;}
		else {r *= a; b--;}
	}
	return r;
}

int main (void) {
	printf("Input two integers to calculate a^b.\n");
	
	printf("a: ");
	int a = 0;
	scanf("%d", &a);

	printf("b: ");
	int b = 0;
	scanf("%d", &b);
	
	printf("Math.h output: %d\n", (int)pow(a,b));
	printf("My function output: %d\n", power(a,b));

	puts("");
}
