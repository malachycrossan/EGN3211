#include <stdio.h>

struct property {
	char *name;
	int price;
	int rent;
	int mortgage;
	int owner;
};


void main (void) {
	struct property properties[28] = {
		{"Mediterranean Avenue", 60, 2, 30, -1},
		{"Baltic Avenue", 60, 4, 30, -1},
		{"Oriental Avenue", 100, 6, 50, -1},
		{"Vermont Avenue", 100, 6, 50, -1},
		{"Connecticut Avenue", 120, 8, 60, -1},
		{"St. Charles Place", 140, 10, 70, -1},
		{"States Avenue", 140, 10, 70, -1},
		{"Virginia Avenue", 160, 12, 80, -1},
		{"St. James Place", 180, 14, 90, -1},
		{"Tennessee Avenue", 180, 14, 90, -1},
		{"New York Avenue", 200, 16, 100, -1},
		{"Kentucky Avenue", 220, 18, 110, -1},
		{"Indiana Avenue", 220, 18, 110, -1},
		{"Illinois Avenue", 240, 20, 120, -1},
		{"Atlantic Avenue", 260, 22, 130, -1},
		{"Ventor Avenue", 260, 22, 130, -1},
		{"Marvin Gardens", 280, 24, 140, -1},
		{"Pacific Avenue", 300, 26, 150, -1},
		{"North Carolina Avenue", 300, 26, 150, -1},
		{"Pennsylvania Avenue", 320, 28, 160, -1},
		{"Park Place", 350, 35, 175, -1},
		{"Boardwalk", 400, 50, 200, -1},
		{"Reading Railroad", 200, 25, 100, -1},
		{"Pennsylvania Railroad", 200, 25, 100, -1},
		{"B.&O. Railroad", 200, 25, 100, -1},
		{"Short Line Railroad", 200, 25, 100, -1},
		{"Electric Company", 150, 10, 75, -1},
		{"Water Works", 150, 10, 75, -1}
	};
	for (int i = 0; i < 28; i++) printf("Name: %s\nPrice: %d Rent: %d Mortgage: %d\n\n", properties[i].name, properties[i].price, properties[i].rent, properties[i].mortgage);
}
