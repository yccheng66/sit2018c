#include <gtest/gtest.h>
#include "../src/triangle.h"
#include <vector>

int main(int argc, char ** argv) {
   testing :: InitGoogleTest( &argc , argv ) ;
   return RUN_ALL_TESTS( ) ;
}

TEST(triangleTest, triangleOnVector)
{

  std::vector<int> a = {0,0};
  std::vector<int> b = {1,0};
  std::vector<int> c = {1,1};
  std::vector<int> d = {2,0};
  std::vector<int> e = {2,2};
  std::vector<int> f = {3,0};
  std::vector<int> g = {3,3};

  std::vector<std::vector<int>> t1 = {a,b,c};
  std::vector<std::vector<int>> t2 = {a,d,e};
  std::vector<std::vector<int>> t3 = {a,f,g};

  std::vector<std::vector<std::vector<int>>> triangle = {t1,t2,t3};

  ASSERT_NEAR(0.5,computeArea(t1),0.00001);
  ASSERT_NEAR(2.0,computeArea(t2),0.00001);
  ASSERT_NEAR(4.5,computeArea(t3),0.00001);
}
TEST(triangleTest, vectorLength){
  std::vector<int> a = {1,1};
  std::vector<int> b = {1,0};
  ASSERT_EQ(1,vectorLength(b));
  ASSERT_EQ(sqrt(2.0),vectorLength(a));
}
TEST(triangleTest, vectorDifference){
  std::vector<int> a = {1,1};
  std::vector<int> b = {1,0};
  std::vector<int> r = vectorDifference(a,b);
  ASSERT_EQ(0, r[0]);
  ASSERT_EQ(1, r[1]);
}
TEST(triangleTest, sortTriangle){
  std::vector<int> a = {0,0};
  std::vector<int> b = {1,0};
  std::vector<int> c = {1,1};
  std::vector<int> d = {2,0};
  std::vector<int> e = {2,2};
  std::vector<int> f = {3,0};
  std::vector<int> g = {3,3};

  std::vector<std::vector<int>> t1 = {a,b,c};
  std::vector<std::vector<int>> t2 = {a,d,e};
  std::vector<std::vector<int>> t3 = {a,f,g};

  std::vector<std::vector<std::vector<int>>> triangle = {t3,t1,t2};
  std::sort(triangle.begin(),triangle.end(),[](
  std::vector<std::vector<int>> x, std::vector<std::vector<int>> y)
    {return computeArea(x) < computeArea(y);});

   ASSERT_EQ(t1,triangle[0]);
   ASSERT_EQ(t2,triangle[1]);
   ASSERT_EQ(t3,triangle[2]);
}

TEST (SortingTest, Ints) {
  std::vector<int> v = {12,7,80,1,0};
  std::sort(v.begin(),v.end());
  ASSERT_EQ(0,v[0]);
  ASSERT_EQ(1,v[1]);
  ASSERT_EQ(7,v[2]);
  ASSERT_EQ(12,v[3]);
  ASSERT_EQ(80,v[4]);
}
TEST (SortingTest, IntsDesc) {
  std::vector<int> v = {12,7,80,1,0};
  std::sort(v.begin(),v.end(),std::greater<int>());
  ASSERT_EQ(80,v[0]);
  ASSERT_EQ(12,v[1]);
  ASSERT_EQ(7,v[2]);
  ASSERT_EQ(1,v[3]);
  ASSERT_EQ(0,v[4]);
}
TEST (SortingTest, IntsDescLambda) {
  std::vector<int> v = {12,7,80,1,0};
  std::sort(v.begin(),v.end(),[](int x,int y){return x > y;});
  ASSERT_EQ(80,v[0]);
  ASSERT_EQ(12,v[1]);
  ASSERT_EQ(7,v[2]);
  ASSERT_EQ(1,v[3]);
  ASSERT_EQ(0,v[4]);
}

TEST (SortingTest, IntsDescLambdaDistToSeven) {
  std::vector<int> v = {12,7,80,1,0};
  int base = v[1];
  std::sort(v.begin(),v.end(),[base](int x,int y){return abs(x-base) > abs(y-base);});
  ASSERT_EQ(80,v[0]);
  ASSERT_EQ(0,v[1]);
  ASSERT_EQ(1,v[2]);
  ASSERT_EQ(12,v[3]);
  ASSERT_EQ(7,v[4]);
}

TEST(triangleTest,objectVersion){
  std::vector<int> a = {0,0};
  std::vector<int> b = {1,0};
  std::vector<int> c = {1,1};
  std::vector<int> d = {2,0};
  std::vector<int> e = {2,2};
  std::vector<int> f = {3,0};
  std::vector<int> g = {3,3};

  Triangle t1 (a,b,c);
  Triangle t2 (a,d,e);
  Triangle t3 (a,f,g);

  std::vector<Triangle> triangles = {t3,t1,t2};
  std::sort(triangles.begin(),triangles.end(),[](Triangle a, Triangle b)
  {return a.area() < b.area();});

  ASSERT_EQ(t1,triangles[0]);
  ASSERT_EQ(t2,triangles[1]);
  ASSERT_EQ(t3,triangles[2]);
}
