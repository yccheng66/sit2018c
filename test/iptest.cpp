#include <gtest/gtest.h>
#include "../src/innerProduct.h"
#include <vector>

int main(int argc, char ** argv) {
   testing :: InitGoogleTest( &argc , argv ) ;
   return RUN_ALL_TESTS( ) ;
}

TEST(IpTest, first) {
  ASSERT_EQ(1, 1);
}

TEST(IpTest, innerProduct2D) {
  int u[] = {1, 0};
  int v[] = {1, 1};

  ASSERT_EQ(1, innerProduct(u, v, 2));
}

TEST(IpTest, innerProduct3D) {
  int u[] = {1, 1, 0};
  int v[] = {0, 1, 1};
  int dim = 3;

  ASSERT_EQ(1, innerProduct(u, v, dim));
}

TEST(IpTest, innerProductOnVector) {
  std::vector<int> u = {1, 1, 0};
  std::vector<int> v = {1, 1, 0};
  ASSERT_EQ(2, innerProduct(u, v));
}
TEST(IpTest, innerProductOnVectorException) {
  std::vector<int> u = {1, 1};
  std::vector<int> v = {1, 1, 0};
  // ASSERT_ANY_THROW(innerProduct(u, v));
  try {
    innerProduct(u,v);
  } catch (std::string s) {
    ASSERT_EQ(std::string("diff dims"), s);
  }
}

void exchange(int & a, int & b) {
  int t = a;
  a = b;
  b = t;
}

void exchange(int * a, int * b) {
  int t = *a;
  *a = *b;
  *b = t;
}

TEST (ExTest, exchange) {
  int i = 1;
  int j = 2;
  exchange(i, j);
  ASSERT_EQ(2, i);
  ASSERT_EQ(1, j);
}

TEST (ExTest, exchangePtr) {
  int i = 1;
  int j = 2;
  exchange(&i, &j);
  ASSERT_EQ(2, i);
  ASSERT_EQ(1, j);
}
