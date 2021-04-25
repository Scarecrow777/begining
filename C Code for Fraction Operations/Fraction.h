#include<stdio.h>
#include <stdlib.h>

#ifndef __FRACTION__
#define __FRACTION__

struct Fraction{
  int Nume, Deno;
};

struct Fraction make_Fraction(int nume, int deno);
struct Fraction minus_sign_decision(struct Fraction* arg);
void print_Fraction(struct Fraction* arg);

struct Fraction add_Fraction(struct Fraction* ls, struct Fraction* rs);

struct Fraction sub_Fraction(struct Fraction* ls, struct Fraction* rs);

struct Fraction multi_Fraction(struct Fraction* ls, struct Fraction* rs);

struct Fraction divi_Fraction(struct Fraction* ls, struct Fraction* rs);
struct Fraction Fraction_simplify(struct Fraction* arg);

#endif
