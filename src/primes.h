#ifndef R_PKG_PRIMES_H
#define R_PKG_PRIMES_H

#include <Rcpp.h>
#include <vector>
#include <cmath>
#include <algorithm>

// [[Rcpp::interfaces(r, cpp)]]
// [[Rcpp::plugins(cpp11)]]

std::vector<int> generate_primes_(int min, int max);
bool is_prime_(int x);
std::vector<bool> is_prime(std::vector<int> x);
Rcpp::IntegerVector next_prime(std::vector<int> x);
Rcpp::IntegerVector prev_prime(std::vector<int> x);
int prime_count(int n, bool upper_bound);
int primorial_n(int n);
int primorial_p(int n);
Rcpp::List k_tuple(int min, int max, std::vector<int> tuple);
Rcpp::List prime_factors(std::vector<int> x);

#endif // R_PKG_PRIMES_H