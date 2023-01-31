all: test build

build: main.c fsm.c fsm.h
	gcc main.c fsm.c -o main

test: build
	./test.sh
	echo "OK"

clean:
	rm -f main
