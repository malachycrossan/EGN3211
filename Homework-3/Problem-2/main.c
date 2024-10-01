/* Author: Malachy Crossan
 * Date: 9-30-24
 * Class: EGN3211-0002
 * Assignment: 3 
 * Problem #2 – Create a custom power function taking two
 * integers as input (aka without math.h). Take input from
 * the keyboard as inputs to send to the function. Compare
 * the results to the built in function (within math.h) */

#include <stdio.h>

int main (void) {
	printf("Input an integer: ");

	int input = 0;
	scanf("%d", &input);

	if (input <= 0) printf("There are no non-negative odd integers less than or equal to your number.\n");

	printf("{");
	for (int i = 1; i <= input; i += 2) {
		printf("%d", i);
		if ((i + 1) < input) printf(", ");
	}
	printf("}");
	puts("");
}
