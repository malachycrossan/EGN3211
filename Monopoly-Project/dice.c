#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Dice Roll Function
 * Rolls (dice_quantity) of die with (dice_sides) sides and returns the sum of all rolls
 * Dependencies: stdlib.h
 * Note set seed using:
 * 	#include <time.h>
 * 	srand((unsigned) time(NULL));
 *
 * dice_quantity: integer greater than or equal to 0
 * dice_sides: integer greater than or equal to 1
 * 
 * Return: integer value of the sum of all rolls
 * */
int roll (int dice_quantity, int dice_sides) {
	int sum = 0;
	for (int i = 0; i < dice_quantity; i++) sum += rand() % (dice_sides) + 1;
	return sum;
}

// test function
void main (void) {
	srand((unsigned) time(NULL));

	int result = roll(1,6);
	printf("1 dice 6 sides: %d\n",result);
	printf("\n");

	printf("2 dice 6 sides(2D6): %d\n",roll(2,6));
	printf("3 dice 20 sides(3D20): %d\n",roll(3,20));
	printf("1 dice 6 sides with a +5 modifier(1D6+5): %d\n",roll(1,6)+5);
	printf("100 dice 2 sides(100D2): %d\n",roll(100,2));
	printf("\n");
	
	printf("frequency test with  5D10\n");	
	int frequency[51] = {0};
	for (int i = 0; i < 2000000; i++) frequency[roll(5,10)]++;
	for (int i = 5; i < 51; i++) {
		printf("%d:",i);
		for (int j = frequency[i]; j > 0; j -= 5000) printf("x");
		printf("\n");
	}
	printf("\n");

	printf("frequency test with 2D6\n");
	int frequency2[13] = {0};
	for (int i = 0; i < 5000; i++) frequency2[roll(2,6)]++;
	for (int i = 2; i < 13; i++) {
		printf("%d:",i);
		for (int j = frequency2[i]; j > 0; j -= 10) printf("x");
		printf("\n");
	}
	printf("\n");
}
