all: test build

build: list.c list.h
	gcc list.c -c -o list.o

test: build
	g++ list.o test/main.cpp --std=c++11 -o testProgram `pkg-config --libs gtest`
	./testProgram
	rm -f testProgram

clean:
	rm -f testProgram
	rm -f list.o
