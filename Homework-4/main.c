/* Author: Malachy Crossan
 * Date: 10-14-24
 * Class: EGN3211-0002 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define EXPRESSION_LENGTH 200

double add (double a, double b);
double sub (double a, double b);
double mut (double a, double b);
double dvd (double a, double b);
double fac (double a);

int parseType (char expression);

int main (void) {
	double (*twoInOp[5])(double, double) = {add, sub, mut, dvd, pow};
	double (*oneInOp[2])(double) = {exp, fac};
	
	printf("Input an expression to be solved: ");
	char expression[EXPRESSION_LENGTH];
	scanf("%[^\n]", &expression);
	
	int top = -1;
	double stack[EXPRESSION_LENGTH/2];
	
	char *curr = expression;
	while (*curr != '\0') {
		for (int i = 0; i <= top; i++) printf("%lf ",stack[i]); printf("<-top\n");
		int type = parseType(*curr);
		//printf("T: %d\n",type);
		if (type < 0) continue;
		else if (type <= 4) stack[++top] = (*twoInOp[type])(stack[top--],stack[top--]);
		else if (type <= 6) stack[++top] = (*oneInOp[type-5])(stack[top--]);
		else if (type == 7) {
			double val = 0;
			while (parseType(*curr) == 7) {
				val *= 10;
				val += *curr - '0';
				curr++;
			}
			stack[++top] = val;
		}
		curr++;
	}
	printf("Result: %lf\n",stack[top]);
}

double add (double a, double b) {return a + b;};
double sub (double a, double b) {return a - b;};
double mut (double a, double b) {return a * b;};
double dvd (double a, double b) {return a / b;};
double etx (double a) {return exp(a);}
double fac (double a) {return a * tgamma(a);printf("%lf",tgamma(a));}

int parseType (char expression) {
	switch (expression) {
		case '+':
			return 0;
		case '-':
			return 1;
		case '*':
			return 2;
		case '/':
			return 3;
		case '^':
			return 4;
		case 'e':
			return 5;
		case '!':
			return 6;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			return 7;
		case ' ':
			return 8;
	}
	return -1;
}
