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
