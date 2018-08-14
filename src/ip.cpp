#include <iostream>
#include "innerProduct.h"
#include <vector>

int main(int argc, char const *argv[]) {
  int iP = 0 ;
  std::vector<int> u = {1,1,0};
  std::vector<int> v = {2,3};
  try {
      iP = innerProduct(u,v);
      std::cout << "Inner Product is "<< iP << '\n';
  } catch (std::string s) {
      std::cout << "Error: " << s << '\n';
  }

  return 0;
}
