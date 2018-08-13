all: bin/hello bin/iptest

bin/hello: hello.cpp
	g++ hello.cpp -o bin/hello

bin/iptest: test/iptest.cpp innerProduct.h
	g++ test/iptest.cpp -o bin/iptest -lgtest -lpthread

clean:
	rm bin/*
