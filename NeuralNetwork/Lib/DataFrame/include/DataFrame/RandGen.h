// Hossein Moein
// July 22, 2019
// Copyright (C) 2019-2022 Hossein Moein
// Distributed under the BSD Software License (see file License)

#pragma once

#include <DataFrame/DataFrameTypes.h>

// ----------------------------------------------------------------------------

namespace hmdf
{

// It generates n uniform integer distribution random numbers.
//                  1
// P(i|a,b) = --------------
//              b − a + 1
//
// It returns the vector of results
// Optional parameters to set:
//     max_value, min_value, seed
//
// T: Type can only be [unsigned] char, [unsigned] short, [unsigned] int,
//    [unsigned] long int, or [unsigned] long long int
// n: Number of numerics to generate
// params: List of all applicable parameters, see DataFrameTypes.h
//
template<typename T>
std::vector<T>
gen_uniform_int_dist(std::size_t n, const RandGenParams<T> &params = { });

// ----------------------------------------------------------------------------

// It generates n uniform real distribution random numbers.
//                1
// P(i|a,b) = ----------
//              b − a
//
// It returns the vector of results
// Optional parameters to set:
//     max_value, min_value, seed
//
// T: Type can only be float, double, or long double
// n: Number of numerics to generate
// params: List of all applicable parameters, see DataFrameTypes.h
//
template<typename T>
std::vector<T>
gen_uniform_real_dist(std::size_t n, const RandGenParams<T> &params = { });

// ----------------------------------------------------------------------------

// It generates random boolean values, according to the discrete probability
// function. The probability of true is:
//          ⎧     p if b == true
// P(b|p) = ⎨
//          ⎩ 1 - p if b == fasle
//
// It returns the vector of results
// Optional parameters to set:
//     prob_true, seed
//
// n: Number of numerics to generate
// params: List of all applicable parameters, see DataFrameTypes.h
//
std::vector<bool>
gen_bernoulli_dist(std::size_t n, const RandGenParams<bool> &params = { });

// ----------------------------------------------------------------------------

// Produces random non-negative integer values i, distributed according to
// discrete probability function:
//            (t)    i         t-i
// P(i|t,p) = (i) . p . (1 - p)
//
// It returns the vector of results
// Optional parameters to set:
//     t_dist, prob_true, seed
//
// T: Type can only be [unsigned] char, [unsigned] short, [unsigned] int,
//    [unsigned] long int, or [unsigned] long long int
// n: Number of numerics to generate
// params: List of all applicable parameters, see DataFrameTypes.h
//
template<typename T>
std::vector<T>
gen_binomial_dist(std::size_t n, const RandGenParams<T> &params = { });

// ----------------------------------------------------------------------------

// Produces random non-negative integer values i, distributed according to
// discrete probability function:
//            (k+i-1)    k         i
// P(i|k,p) = (i    ) . p . (1 - p)
//
// It returns the vector of results
// Optional parameters to set:
//     t_dist, prob_true, seed
//
// T: Type can only be [unsigned] char, [unsigned] short, [unsigned] int,
//    [unsigned] long int, or [unsigned] long long int
// n: Number of numerics to generate
// params: List of all applicable parameters, see DataFrameTypes.h
//
template<typename T>
std::vector<T>
gen_negative_binomial_dist(std::size_t n, const RandGenParams<T> &params = {});

// ----------------------------------------------------------------------------

// Produces random non-negative integer values i, distributed according to
// discrete probability function:
//                     i
// P(i|p) = p . (1 - p)
//
// It returns the vector of results
// Optional parameters to set:
//     prob_true, seed
//
// T: Type can only be [unsigned] char, [unsigned] short, [unsigned] int,
//    [unsigned] long int, or [unsigned] long long int
// n: Number of numerics to generate
// params: List of all applicable parameters, see DataFrameTypes.h
//
template<typename T>
std::vector<T>
gen_geometric_dist(std::size_t n, const RandGenParams<T> &params = { });

// ----------------------------------------------------------------------------

// Produces random non-negative integer values i, distributed according to
// discrete probability function:
//             -u    i
//            e     u
// P(i|u) = ------------
//               i!
//
// It returns the vector of results
// Optional parameters to set:
//     mean, seed
//
// T: Type can only be [unsigned] char, [unsigned] short, [unsigned] int,
//    [unsigned] long int, or [unsigned] long long int
// n: Number of numerics to generate
// params: List of all applicable parameters, see DataFrameTypes.h
//
template<typename T>
std::vector<T>
gen_poisson_dist(std::size_t n, const RandGenParams<T> &params = { });

// ----------------------------------------------------------------------------

// Produces random non-negative floating-point values x,
// distributed according to probability density function:
// P(x|λ) = λe-λx
//
// It returns the vector of results
// Optional parameters to set:
//     lambda, seed
//
// T: Type can only be float, double, or long double
// n: Number of numerics to generate
// params: List of all applicable parameters, see DataFrameTypes.h
//
template<typename T>
std::vector<T>
gen_exponential_dist(std::size_t n, const RandGenParams<T> &params = { });

// ----------------------------------------------------------------------------

// Produces random non-negative floating-point values x,
// distributed according to probability density function:
// p(x∣α,β)=e−x/ββα⋅Γ(α)⋅xα−1
//
// It returns the vector of results
// Optional parameters to set:
//     alpha, beta, seed
//
// T: Type can only be float, double, or long double
// n: Number of numerics to generate
// params: List of all applicable parameters, see DataFrameTypes.h
//
template<typename T>
std::vector<T>
gen_gamma_dist(std::size_t n, const RandGenParams<T> &params = { });

// ----------------------------------------------------------------------------

// Produces random non-negative floating-point values x,
// distributed according to probability density function:
// see https://en.cppreference.com/w/cpp/numeric/random/weibull_distribution
//
// It returns the vector of results
// Optional parameters to set:
//     alpha (shape), beta (scale), seed
//
// T: Type can only be float, double, or long double
// n: Number of numerics to generate
// params: List of all applicable parameters, see DataFrameTypes.h
//
template<typename T>
std::vector<T>
gen_weibull_dist(std::size_t n, const RandGenParams<T> &params = { });

// ----------------------------------------------------------------------------

// Produces random numbers according to the extreme value distribution
// (it is also known as Gumbel Type I, log-Weibull, Fisher-Tippett Type I):
// see https://en.cppreference.com/w/cpp/numeric/random/extreme_value_distribution
//
// It returns the vector of results
// Optional parameters to set:
//     alpha (location), beta (scale), seed
//
// T: Type can only be float, double, or long double
// n: Number of numerics to generate
// params: List of all applicable parameters, see DataFrameTypes.h
//
template<typename T>
std::vector<T>
gen_extreme_value_dist(std::size_t n, const RandGenParams<T> &params = { });

// ----------------------------------------------------------------------------

// Generates random numbers according to the Normal (or Gaussian)
// random number distribution. It is defined as:
// see https://en.cppreference.com/w/cpp/numeric/random/normal_distribution
//
// It returns the vector of results
// Optional parameters to set:
//     mean, std (scale), seed
//
// T: Type can only be float, double, or long double
// n: Number of numerics to generate
// params: List of all applicable parameters, see DataFrameTypes.h
//
template<typename T>
std::vector<T>
gen_normal_dist(std::size_t n, const RandGenParams<T> &params = { });

// ----------------------------------------------------------------------------

// The lognormal_distribution random number distribution produces
// random numbers x > 0 according to a log-normal distribution:
// see https://en.cppreference.com/w/cpp/numeric/random/lognormal_distribution
//
// It returns the vector of results
// Optional parameters to set:
//     m (log-scale), s (shape), seed
//
// T: Type can only be float, double, or long double
// n: Number of numerics to generate
// params: List of all applicable parameters, see DataFrameTypes.h
//
template<typename T>
std::vector<T>
gen_lognormal_dist(std::size_t n, const RandGenParams<T> &params = { });

// ----------------------------------------------------------------------------

// The chi_squared_distribution produces random numbers x > 0 according
// to the Chi-squared distribution:
// see https://en.cppreference.com/w/cpp/numeric/random/chi_squared_distribution
//
// It returns the vector of results
// Optional parameters to set:
//     n (degree of freedom), seed
//
// T: Type can only be float, double, or long double
// n: Number of numerics to generate
// params: List of all applicable parameters, see DataFrameTypes.h
//
template<typename T>
std::vector<T>
gen_chi_squared_dist(std::size_t n, const RandGenParams<T> &params = { });

// ----------------------------------------------------------------------------

// Produces random numbers according to a Cauchy distribution
// (also called Lorentz distribution):
// see https://en.cppreference.com/w/cpp/numeric/random/cauchy_distribution
//
// It returns the vector of results
// Optional parameters to set:
//     alpha (location), beta (scale), seed
//
// T: Type can only be float, double, or long double
// n: Number of numerics to generate
// params: List of all applicable parameters, see DataFrameTypes.h
//
template<typename T>
std::vector<T>
gen_cauchy_dist(std::size_t n, const RandGenParams<T> &params = { });

// ----------------------------------------------------------------------------

// Produces random numbers according to the f-distribution:
// see https://en.cppreference.com/w/cpp/numeric/random/fisher_f_distribution
//
// It returns the vector of results
// Optional parameters to set:
//     n (degree of freedom), n2 (degree of freedom), seed
//
// T: Type can only be float, double, or long double
// n: Number of numerics to generate
// params: List of all applicable parameters, see DataFrameTypes.h
//
template<typename T>
std::vector<T>
gen_fisher_f_dist(std::size_t n, const RandGenParams<T> &params = { });

// ----------------------------------------------------------------------------

// Produces random floating-point values x, distributed according
// to probability density function:
// see https://en.cppreference.com/w/cpp/numeric/random/student_t_distribution
//
// It returns the vector of results
// Optional parameters to set:
//     n (degree of freedom), seed
//
// T: Type can only be float, double, or long double
// n: Number of numerics to generate
// params: List of all applicable parameters, see DataFrameTypes.h
//
template<typename T>
std::vector<T>
gen_student_t_dist(std::size_t n, const RandGenParams<T> &params = { });

} // namespace hmdf

// ----------------------------------------------------------------------------

#  ifndef HMDF_DO_NOT_INCLUDE_TCC_FILES
#    include <DataFrame/Internals/RandGen.tcc>
#  endif // HMDF_DO_NOT_INCLUDE_TCC_FILES

// ----------------------------------------------------------------------------

// Local Variables:
// mode:C++
// tab-width:4
// c-basic-offset:4
// End: