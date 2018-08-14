#include <math.h>

class Shape {
public:

  virtual double area() = 0;


};


class Circle : public Shape {
public:

  Circle(double r) {
    _r = r;
  }

  double area() {
    return M_PI * _r * _r;
  }

  double _r;
};
