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


/* --------------------------------------------------------------------------------
#   get a random integer from [0,k-1] using R's PRNG
-------------------------------------------------------------------------------- */

int randint(const int k);

SEXP randint_C(SEXP kR);

/* --------------------------------------------------------------------------------
#   randomly permute an array of size n
-------------------------------------------------------------------------------- */

void permute(int* array, const int n);

SEXP permvec_C(SEXP vec);


/* --------------------------------------------------------------------------------
#   generate a new array (dest) from elements in (src) ordered by (order); duplicates allowed
-------------------------------------------------------------------------------- */

void order(int* dest, const int* const src, const int* const order, const int n);

SEXP ordervec_C(SEXP srcR, SEXP orderR);


/* --------------------------------------------------------------------------------
#   Randomized radical inverse functions for indices in ind and for base b.
#   ans: pointer to memory where results will be written to
#   ind: pointer to indices
#   n: number of indices (also size of ans)
#   b: base
-------------------------------------------------------------------------------- */

SEXP randradinv_C(SEXP ind, SEXP bR);

#endif
