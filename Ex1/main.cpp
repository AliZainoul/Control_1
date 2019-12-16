#include <iostream>
#include <cmath>
#include "trapezoidal.hpp"
#include "Vector.hpp"
#include "error.hpp"
using namespace std;

typedef double (*pfn) (double);

double f(double x)
{
  return 1+x;
};

int main ()
{
  unsigned int n=0;
  double h=0.0;
  double x_0=0.0;
  double integral=0.0;
  double a=0.0;
  double b=0.0;
  //double f(double x) = 1+x;

  //typedef double (*pfn) (double);
  cout << "Entrez un nombre d'intervalles n :  \n";
  cin >> n;

  cout << "Entrez la borne inf a : \n ";
  cin >> a;

  cout << "Entrez la borne sup b :  \n";
  cin >> b;

  h = (b-a)/n;
  Vector x(n+1,x_0);
  integral = trapezoidal(a, b, f, n);
  cout << integral;
  cout << "Function integrated over " << a << "to " << b << " is : " << integral;
}
