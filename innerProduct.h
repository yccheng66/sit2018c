int innerProduct(int u[], int v[], int dim) {
  int sum = 0;
  for (int i = 0; i<dim; i++) {
    sum = sum + u[i] * v[i];
  }
  return sum;
}
