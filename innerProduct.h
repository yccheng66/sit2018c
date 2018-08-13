#include <vector>
#include <string>

int innerProduct(int * u, int * v, int dim) {
  int sum = 0;
  for (int i = 0; i<dim; i++) {
    sum = sum + u[i] * v[i];
  }
  return sum;
}

int innerProduct(std::vector<int> & u, std::vector<int> & v) {
  if(u.size()!= v.size ()){
    throw std::string("diff dims");
  }
  int sum = 0;
  for (int i=0; i < u.size(); i++)
    sum += u[i]*v[i];
  return sum;
}
