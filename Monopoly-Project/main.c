#include <stdio.h>
#include <stdlib.h>

int roll (int dice_quantity, int dice_sides){};
int quit (void) {return 1;}
int new (void) {return 0;}

struct menu_item {
	int (*function_call)(void);
       char description[128];	
};

//struct game_state
//struct player_turn

void main (void) {
	printf("Welcome to Malachy Crossan's Monopoly Simulator Project\n");
	
	#define num_main_menu_items 5
	struct menu_item main_menu_items[num_main_menu_items] = {
		{new, "New Game"},
		//add statistics option
		//add save to file option
		//add load from file option
		{quit, "Quit"}
	};
	int quit_menu = 0;
	while(quit_menu != 1) {
		for (int i = 0; i < num_main_menu_items; i++)
			printf("%d: %s\n", i, main_menu_items[i].description); // prints "#: Description" for all options
		printf(">");
		int menu_choice = 0;
		scanf("%d", &menu_choice);
		if (menu_choice < 0 || menu_choice >= num_main_menu_items) printf("Invalid option! Try again...\n");
		else quit_menu = main_menu_items[menu_choice].function_call();
	}
}
