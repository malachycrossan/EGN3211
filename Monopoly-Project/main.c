#include <stdio.h>
#include <stdlib.h>

int roll (int dice_quantity, int dice_sides);
int quit (void) {return 1;}
int new (void) {return 0;}

struct option {
	int (*function_call)(void);
       char description[128];	
};

void main (void) {
	printf("Welcome to Malachy Crossan's Monopoly Simulator Project\n");
	
	#define num_menu_options 5
	struct option menu_options[num_menu_options] = {
		{new, "New Game"},
		//add statistics option
		//add save to file option
		//add load from file option
		{quit, "Quit"}
	};
	int quit_menu = 0;
	while(quit_menu != 1) {
		for (int i = 0; i < num_menu_options; i++)
			printf("%d: %s\n", i, menu_options[i].description); // prints "#: Description" for all options
		printf(">");
		int menu_choice = 0;
		scanf("%d", &menu_choice);
		if (menu_choice < 0 || menu_choice >= num_menu_options) printf("Invalid option! Try again...\n");
		else quit_menu = menu_options[menu_choice].function_call();
	}
}
