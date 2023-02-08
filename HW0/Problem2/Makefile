all: test build

build: main.c fsm.c fsm.h
	gcc main.c --std=c11 fsm.c -o main 

test: build
	./test.sh
	echo "OK"

gen: build
	./gen.sh

clean:
	rm -f main
