all: bin/hello

bin/hello: hello.cpp
	g++ hello.cpp -o bin/hello

clean:
	rm bin/hello
