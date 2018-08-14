#include <vector>
#include <math.h>
#include "shape.h"

double vectorLength(std::vector<int> v){
  return sqrt(v[0] * v[0] + v[1] *v[1]);
}
std::vector<int> vectorDifference(std::vector<int> x,std::vector<int> y){
  std::vector<int> r(2);
  r[0] = x[0]-y[0];
  r[1] = x[1]-y[1];
  return r;
}
double computeArea(std::vector<std::vector<int>> t)
{
  double a = vectorLength(vectorDifference(t[1],t[0]));
  double b = vectorLength(vectorDifference(t[2],t[1]));
  double c = vectorLength(vectorDifference(t[0],t[2]));
  double s = (a + b + c) / 2;
  return sqrt(s*(s-a)*(s-b)*(s-c));

}

class Triangle : public Shape {
public:
  Triangle(std::vector<int> a, std::vector<int> b, std::vector<int> c){
    _a = a; _b = b; _c = c;
  }

  double area(){
    std::vector<std::vector<int>> t = {_a, _b, _c};
    return computeArea(t);
  }

  bool operator == (Triangle y) const {
    return _a == y._a && _b == y._b && _c == y._c;
  }

  std::vector<int> _a, _b, _c;
};
//
// bool operator ==(Triangle x, Triangle y){
//   return x._a == y._a && x._b == y._b && x._c == y._c;
// }
