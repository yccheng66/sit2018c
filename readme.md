# Problem 1

In a unix-like operating system (OS), you run a [_console application_](https://en.wikipedia.org/wiki/Console_application) by typing a command through the keyboard (or the _console input_) and viewing the result on the screen (or the _console output_). In macOS, you obtain the console by running _term_. Inside the console, you could run a program. For example, typing "date <ret\>" gives you the current date. In this case, the program "date" (and many others like "ls", "wc", etc.) is a system app located in directory /bin. You can also run a program you have previously built. For example, if the program "hello" in in your current directory, you run it by typing "./hello".

The problem is to build a console application _hello_ that asks the user to type in his/her name on the _console input_, and print the string "Hello, _name_" on the _console output_, where _name_ is what the user previous typed for his/her name.

## Tasks (HTSI - plans)
- (Eng) What is program in c/cpp?
  - computer, os, program (console app)
- (Eng) Program_
  - binary: or executable, what computer runs; beginning with the entry point _main_
  - source: what programmer writes in C/C++
  - build: converting from source to binary
    - compiling and linking
    - installing g++ for mac (xcode): xcode-select --install
  - editing a cpp source program with atom, vi, vim, etc.
- (Lan) What is the entry point of a cpp program
  - How to write the main function?
- (Eng) How to build a program?
  - command line: g++
  - make and makefile
- (Lan) How to print to console out?
  - console output (standard output stream): cout (c++)
  - stream insertion operator <<
  - standard library: std::cout
- (Lan) How to read from console in?
  - console input (standard input stream): cin (c++)
  - stream extraction operator >>
  - standard library: std::cin
  - string: std::string
  - hello all!
- (Eng) How to do version control with git?
   - git init
   - git status
   - git add .
   - git commit -m "message"
   - git log --oneline
   - git checkout _commit_: checkout a previous commit
   - git branch _branch_: create a new branch
   - git checkout _branch_: switch to a branch
   - git branch : show all branches
   - git remote -v : show url of the remote
   - git remote rm origin; rm .git/FETCH_HEAD : unlink local from remote
- (Lan) parameters to main arg count, arg vector

# Problem 2
   Prompt the user to input two vectors. Compute the inner product (or dot product) of two vectors when it is defined. For example,

       [1, 0] · [1, 1] = 1,
       [1, 1, 0] · [0, 1, 1] = 1, and
       [1,0] · [1,1,0] => undefined.

   Prompt the user whether to continue or stop.

## Tasks (HTSI - plans)

- (PSol) [_How To Solve It_](http://htsicpp.blogspot.com/2014/08/introducing-how-to-solve-it-cpp.html)
- (Eng) How to test our program?
  - console input/output
  - unit tests with Google test
  - [installing google test](http://hack.limbicmedia.ca/installing-google-test/)
  - data (given), operation (when), result (then)
  - test driven development (TDD)
- (Lan) How to write a function
  - name, parameters, return type
  - parameter passing: call by value
  - overloading: inner products for 2d and 3d vectors
- (Eng) Separations: more structure to your project
  - production code from test: use of header file
  - binaries from source
  - git rm _binaries_
- (Lan) Array: multiple variables of the same type
  - memory model of variables and array of variables
  - separate tests from production
  - main program: once only
- (Eng) refactoring: extract function to cut duplicated code
- (Lan) call by value (pointer) and call by reference
  - digress: exchange
- (Lan) C++ vector for better dimension handling
  - template
  - template function
- (Lan) exception handling
  - replace return code with exception
  - the main program for inner product


# Problem 3

   In the plane, a point is described by a 2d vector. Given any three points, a triangle is determined. Given n triangles that are inside an STL container, sort them by their areas in the ascending order.

## Tasks (HTSI - plans)
- (Lan) Area of a triangle:
  - C function
    - length of a vector
    - difference of two vectors: operator overloading
  - (Lan) C++ object: triangle
    - data and function together
    - constructor/destructor
- (Lan) C++ Standard template library
  - algorithms: sorting, searching, ...  
  - containers: array, list, vector, map, ...
  - lambda: anonymous callback function used by the stl algorithms
