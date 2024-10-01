/* Author: Malachy Crossan
 * Date: 9-30-24
 * Class: EGN3211-0002
 * Assignment: 3 
 * Problem #1 – Enter a series of characters from the
 * keyboard (enter all in a single line) and print them in
 * reverse order */

#include <stdio.h>

int main (void) {
	printf("%s", "Input a string of characters, with a max length of 20, on a single line: ");

	char inputString[20] = "";
	scanf("%19s", inputString);

	for (int i = 19; i >= 0; i--) {
		printf("%c", inputString[i]);
	}
	puts("");
}
