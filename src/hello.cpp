#include <iostream>
#include <string>

int main(int argc, char ** argv) {
  std::cout << "what is your name please?";
  std::string answer;        
  std::cin >> answer;
  std::cout << "Hello,"<<answer<<"\n";
  return EXIT_SUCCESS;
}
