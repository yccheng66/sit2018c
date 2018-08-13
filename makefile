all: bin/hello bin/iptest

bin/hello: hello.cpp
	g++ hello.cpp -o bin/hello

bin/iptest: iptest.cpp innerProduct.h
	g++ iptest.cpp -o bin/iptest -lgtest -lpthread

clean:
	rm bin/*
