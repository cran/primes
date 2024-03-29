#ifndef R_PKG_PRIMES_H
#define R_PKG_PRIMES_H

#include <Rcpp.h>
#include <vector>

std::vector<int> generate_primes_(int min, int max);
std::vector<int> generate_n_primes(int n);
Rcpp::IntegerVector nth_prime(const Rcpp::IntegerVector& x);
bool is_prime_(int x);
Rcpp::LogicalVector is_prime(const Rcpp::IntegerVector& x);
Rcpp::IntegerVector next_prime(const Rcpp::IntegerVector& x);
Rcpp::IntegerVector prev_prime(const Rcpp::IntegerVector& x);
int prime_count(int n, bool upper_bound);
int nth_prime_estimate(int n, bool upper_bound);
Rcpp::List k_tuple(int min, int max, std::vector<int> tuple);
Rcpp::List sexy_prime_triplets(int min, int max);
Rcpp::List prime_factors(const Rcpp::IntegerVector& x);
int gcd_(int m, int n);
int scm_(int m, int n);
int Rgcd_(const Rcpp::IntegerVector& x);
int Rscm_(const Rcpp::IntegerVector& x);
Rcpp::IntegerVector gcd(const Rcpp::IntegerVector& m, const Rcpp::IntegerVector& n);
Rcpp::IntegerVector scm(const Rcpp::IntegerVector& m, const Rcpp::IntegerVector& n);
Rcpp::LogicalVector coprime(const Rcpp::IntegerVector& m, const Rcpp::IntegerVector& n);

#endif // R_PKG_PRIMES_H
