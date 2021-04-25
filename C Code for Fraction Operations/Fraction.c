#include<stdio.h>
#include <stdlib.h>
#include"Fraction.h"

struct Fraction make_Fraction(int nume, int deno) {
	struct Fraction result;
	result.Nume = nume;
	result.Deno = deno;
	return result;
}

void print_Fraction(struct Fraction* arg) {
        if((arg->Nume)%(arg->Deno) ==0)
        printf("%d\n", (arg->Nume)/(arg->Deno));
        else
	printf("(%d)/(%d)\n", arg->Nume, arg->Deno);
	return;
}

struct Fraction minus_sign_decision(struct Fraction* arg){
          if(arg->Deno < 0){
           if(arg->Deno < 0&&arg->Nume < 0){
              arg->Deno = abs(arg->Deno);
              arg->Nume = abs(arg->Nume);
           }else{
              arg->Deno = abs(arg->Deno);
              arg->Nume -= 2*(arg->Nume);
              }
         }
}

struct Fraction Fraction_simplify(struct Fraction* arg){
        minus_sign_decision(arg);
        int remainder_a,remainder_b;
        for(int i=abs(arg->Nume);i >= 2;i--)
        {
        remainder_a = arg->Deno%i;
        remainder_b = arg->Nume%i;
         if(remainder_a == 0 &&remainder_b == 0)
         {
           arg->Deno = arg->Deno/i;
           arg->Nume = arg->Nume/i;
         }
        } 
}

struct Fraction add_Fraction(struct Fraction* ls, struct Fraction* rs) {
        minus_sign_decision(ls);
        minus_sign_decision(rs);
	struct Fraction result;

	result.Deno = ls->Deno * rs->Deno;
	result.Nume = ls->Nume * rs->Deno + rs->Nume * ls->Deno;
	return result;
}


struct Fraction sub_Fraction(struct Fraction* ls, struct Fraction* rs) {
        minus_sign_decision(ls);
        minus_sign_decision(rs);
	struct Fraction result;
	result.Deno = ls->Deno * rs->Deno;
	result.Nume = ls->Nume * rs->Deno - rs->Nume * ls->Deno;
	return result;
}


struct Fraction multi_Fraction(struct Fraction* ls, struct Fraction* rs) {
        minus_sign_decision(ls);
        minus_sign_decision(rs);
	struct Fraction result;
	result.Deno = ls->Deno * rs->Deno;
	result.Nume = ls->Nume * rs->Nume;
	return result;
}


struct Fraction divi_Fraction(struct Fraction* ls, struct Fraction* rs) {
        minus_sign_decision(ls);
        minus_sign_decision(rs);
	struct Fraction result;
	result.Deno = ls->Deno * rs->Nume;
	result.Nume = ls->Nume * rs->Deno;
        return result;
}



