#include <gtest/gtest.h>
#include "../src/triangle.h"
#include <vector>

int main(int argc, char ** argv) {
   testing :: InitGoogleTest( &argc , argv ) ;
   return RUN_ALL_TESTS( ) ;
}

TEST(shapeTest, first) {

  std::vector<int> a = {0,0};
  std::vector<int> b = {1,0};
  std::vector<int> c = {1,1};

  Shape * s = new Triangle(a, b, c);

  ASSERT_NEAR(0.5, s->area(), 0.001);
}

TEST(shapeTest, circle) {

  Shape * s = new Circle(1);

  ASSERT_NEAR(M_PI, s->area(), 0.01);
}

TEST(shapeTest, sorting) {

  std::vector<int> a = {0,0};
  std::vector<int> b = {1,0};
  std::vector<int> c = {1,1};
  std::vector<int> d = {2,0};
  std::vector<int> e = {2,2};
  std::vector<int> f = {3,0};
  std::vector<int> g = {3,3};

  Shape * t1 = new Triangle(a, b, c);
  Shape * t2 = new Triangle(a, d, e);
  Shape * t3 = new Triangle(a, f, g);

  Shape * c1 = new Circle(1);
  Shape * c2 = new Circle(10);

  std::vector<Shape *> shapes = {t1, c1, t2, c2, t3};

  std::sort(shapes.begin(), shapes.end(), [](Shape * x, Shape * y){
    return x->area() < y->area();
  });

  ASSERT_NEAR(0.5, shapes[0]->area(), 0.0001);
  ASSERT_NEAR(2.0, shapes[1]->area(), 0.0001);
  ASSERT_NEAR(M_PI, shapes[2]->area(), 0.0001);
  ASSERT_NEAR(4.5, shapes[3]->area(), 0.0001);
  ASSERT_NEAR(M_PI * 100, shapes[4]->area(), 0.0001);
}
