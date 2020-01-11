# -------------------------------------------------------------------------------- #
#
#   mcfun: fun with (Randomized-)(quasi-) Monte Carlo things
#   .Call interface to C functions
#   Sean Wu (slwu89@berkeley.edu)
#   January 2020
#
# -------------------------------------------------------------------------------- #

#' Draw a Random Integer in [0,k-1]
#'
#' @param k an integer value
#'
#' @useDynLib mcfun randint_C
#' @export
randint <- function(k){
  .Call(randint_C,as.integer(k))
}

#' Fisher-Yates Shuffle
#'
#' Randomly shuffle a vector.
#'
#' @param vec a vector of integers
#'
#' @useDynLib mcfun permvec_C
#' @export
permvec <- function(vec){
  .Call(permvec_C,as.integer(vec))
}

#' Order a Vector
#'
#' Generate a new vector from elements in \code{src} ordered by \code{order};
#' \code{order} may be longer than \code{src} (duplicates allowed).
#'
#' @param src a vector of integers to be reordered
#' @param order a (zero-indexed) vector of indices
#'
#' @useDynLib mcfun ordervec_C
#' @export
ordervec <- function(src,order){
  .Call(ordervec_C,as.integer(src),as.integer(order))
}

#' Randomized van der Corput Scrambling Algorithm
#'
#' Randomized radical inverse functions for indices in in \code{ind} and for base \code{b}.
#' The calling routine should set the random seed if reproducibility is desired.
#' Input is a vector ind of non-negative integer indices and a prime base
#' \code{b} >= 2. The while loop terminates in floating point arithmetic.
#'
#' @param ind a vector of integer indices
#' @param b a base
#'
#' @useDynLib mcfun randradinv_C
#' @export
randradinv <- function(ind,b){
  .Call(randradinv_C,as.integer(ind),as.integer(b))
}
