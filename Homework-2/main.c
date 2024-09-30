/* Author: Malachy Crossan
 * Date: 9-8-24
 * Class: EGN3211-0002 */

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
