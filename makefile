all: bin/hello bin/iptest bin/ip bin/triangletest

bin/hello: src/hello.cpp
	g++ -std=c++11 src/hello.cpp -o bin/hello

bin/ip: src/ip.cpp src/innerProduct.h
	 g++ -std=c++11 src/ip.cpp -o bin/ip


bin/iptest: test/iptest.cpp src/innerProduct.h
	g++ -std=c++11 test/iptest.cpp -o bin/iptest -lgtest -lpthread

bin/triangletest: test/triangletest.cpp src/triangle.h
	g++ -std=c++11 test/triangletest.cpp -o bin/triangletest -lgtest -lpthread

clean:
	rm bin/*
