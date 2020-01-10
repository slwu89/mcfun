/* --------------------------------------------------------------------------------
#
#   mcfun: fun with (Randomized-)(quasi-) Monte Carlo things
#   Halton Algorithm
#   C by Sean Wu (slwu89@berkeley.edu) adapted from Art B. Owen (https://statweb.stanford.edu/~owen/code/rhalton.R)
#   January 2020
#
-------------------------------------------------------------------------------- */

#ifndef HALTON_H
#define HALTON_H

#include <stdio.h>
#include <string.h>

#include <R.h>
#include <Rmath.h>
#include <Rinternals.h>

/* get a random integer from [0,b-1] */
int randint(const int a, const int b);

/* randomly permute an array of size n */
void permute(int* array, const int n);

/* generate a new array (dest) from elements in (src) ordered by (order); duplicates allowed */
void order(int* dest, const int* const src, const int* const order, const int n);

/* Randomized radical inverse functions for indices in ind and for base b. */
void randradinv(double* ans, int* ind, const int n, int b);

SEXP permvec_C(SEXP vec);

SEXP randradinv_C(SEXP ind, SEXP bR);

SEXP one_iterC(SEXP b2rR, SEXP resR, SEXP permR, SEXP br, SEXP nR);

SEXP randradinv_CTEST(SEXP ind, SEXP bR);

#endif
