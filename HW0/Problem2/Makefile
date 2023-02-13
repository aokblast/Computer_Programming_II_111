all: test build

build: main.c fsm.c fsm.h
	gcc main.c --std=c11 fsm.c -o main 

test: build
	./test.sh

gen: build
	./gen.sh

clean:
	rm -f main
