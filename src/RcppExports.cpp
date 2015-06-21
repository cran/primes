// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// is_prime_vector
std::vector < bool > is_prime_vector(std::vector < int > x);
RcppExport SEXP primes_is_prime_vector(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector < int > >::type x(xSEXP);
    __result = Rcpp::wrap(is_prime_vector(x));
    return __result;
END_RCPP
}
// generate_primes_
std::vector < int > generate_primes_(int min, int max);
RcppExport SEXP primes_generate_primes_(SEXP minSEXP, SEXP maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type min(minSEXP);
    Rcpp::traits::input_parameter< int >::type max(maxSEXP);
    __result = Rcpp::wrap(generate_primes_(min, max));
    return __result;
END_RCPP
}
