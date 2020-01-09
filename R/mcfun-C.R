# -------------------------------------------------------------------------------- #
#
#   mcfun: fun with (Randomized-)(quasi-) Monte Carlo things
#   .Call interface to C functions
#   Sean Wu (slwu89@berkeley.edu)
#   January 2020
#
# -------------------------------------------------------------------------------- #


#' test
#'
#' @useDynLib mcfun permvec_C
#' @export
permvec <- function(vec){
  .Call(permvec_C,as.integer(vec))
}


#' test 1
#'
#' @useDynLib mcfun ordervec_C
#' @export
ordervec <- function(vector,orderV){
  .Call(ordervec_C,as.integer(vector),as.integer(orderV))
}

#' test 2
#'
#' @useDynLib mcfun randradinv_C
#' @export
randradinv <- function(ind,b){
  .Call(randradinv_C,as.integer(ind),as.integer(b))
}
