#ifndef CLASS_DEFINITE_INTEGRAL_H
#define CLASS_DEFINITE_INTEGRAL_H
#include <iostream>
#include <cmath>
#include "Vector.hpp"
#include "trapezoidal.hpp"
#include "error.hpp"
using namespace std;


typedef double (*pfn) (double);


class definite_integral {

  double lower;
  double upper;
  pfn integrand;


public:

  definite_integral(double a, double b, pfn f); // constructor
  friend double trapezoidal(double a, double b, pfn f, int n);
  double lowbd() const{return lower;}; // accessor: get lower bound
  double upbd() const{return upper;}; // accessor: get upper bound
  void change_bounds(double a, double b); //change integral bounds to a, b
  double trapezoidal(int n) const; // compute integral using trapezoidal rule
     // with n sub-intervals

};
#endif
