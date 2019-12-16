#include <iostream>
#include <cmath>
#include "Vector.hpp"
#include "error.hpp"
#include "trapezoidal.hpp"
using namespace std;


typedef double (*pfn) (double);

// Constructor
  definite_integral::definite_integral(double a, double b, pfn f)
  {
    lower = a;
    upper = b;
    integrand = f;
  }

// Change Interval Bounds to a and to b
  void change_bounds(double a, double b)
  {
    this.lower = a;
    this.upper = b;
  }

  double trapezoidal(int n) const {
    cout << "Entrez un nombre d'intervalles n :  \n";
    cin >> n;
    double h = h_n / n;
    integral = trapezoidal(a, b, f, n);
    return integral;
  }
