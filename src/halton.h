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

#include <R.h>
#include <Rmath.h>

/* Randomized radical inverse functions for indices in ind and for base b. */
void randradinv(double* dest, int* ind, const int n, const int b);

#endif
