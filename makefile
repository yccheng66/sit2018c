all: bin/hello bin/iptest

bin/hello: src/hello.cpp
	g++ -std=c++11 src/hello.cpp -o bin/hello

bin/iptest: test/iptest.cpp src/innerProduct.h
	g++ -std=c++11 test/iptest.cpp -o bin/iptest -lgtest -lpthread

clean:
	rm bin/*
