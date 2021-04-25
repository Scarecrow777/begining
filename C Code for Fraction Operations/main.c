#include<stdio.h>
#include <stdlib.h>
#include"Fraction.h"


int main(void) {
	struct Fraction x = make_Fraction(1, 6), y = make_Fraction(3,-2), ans = make_Fraction(0,0); 
	
	printf("x=");
	print_Fraction(&x);
	printf("\ny=");
	print_Fraction(&y);
	printf("\n");
	printf("\n");
	
	ans = add_Fraction(&x, &y);
	Fraction_simplify(&ans);
        printf("Addition:\n");
	printf("answer=");
	print_Fraction(&ans);
	printf("\n");

        ans = sub_Fraction(&x, &y);
        Fraction_simplify(&ans);
	printf("Subtraction:\n");
	printf("answer=");
	print_Fraction(&ans);
	printf("\n");
	
        ans = multi_Fraction(&x, &y);
	Fraction_simplify(&ans);
	printf("multiplication:\n");
	printf("answer=");
	print_Fraction(&ans);
	printf("\n");
	
        ans = divi_Fraction(&x, &y);
	Fraction_simplify(&ans);
        printf("denominator:\n");
	printf("answer=");
	print_Fraction(&ans);
	printf("\n");
	

	return 0;
}

