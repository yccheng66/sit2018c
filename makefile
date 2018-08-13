all: bin/hello bin/iptest

bin/hello: hello.cpp
	g++ -std=c++11 hello.cpp -o bin/hello

bin/iptest: test/iptest.cpp innerProduct.h
	g++ -std=c++11 test/iptest.cpp -o bin/iptest -lgtest -lpthread

clean:
	rm bin/*
