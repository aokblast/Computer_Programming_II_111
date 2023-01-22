#include <stddef.h>
#include "list.h"

// data in the list
int data[SZ] = {0};

// left link of current node
static size_t left_link[SZ] = {0};

// right link of current node
static size_t right_link[SZ] = {0};

// start of the link
static size_t head = 0;

// one after the last node
static size_t tail = 1;

void init() {

}

void clear() {

}

size_t insert(size_t loc, int32_t val) {
  return 0;
}

size_t erase(size_t loc) {
  return 0;
}

int32_t back() {
	return 0;
}

void push_back(int32_t val) {

}

void pop_back() {

}

int32_t front() {
	return 0;
}

void push_front(int32_t val) {

}

void pop_front() {

}

size_t find(int32_t val) {
  return 0;
}

size_t size() {
	return 0;
}

size_t begin() {
	return 0;
}

size_t end() {
	return 0;
}