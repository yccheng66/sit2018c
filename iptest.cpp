#include <gtest/gtest.h>
#include "innerProduct.h"

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

  ASSERT_EQ(1, innerProduct(u, v, 3));
}
