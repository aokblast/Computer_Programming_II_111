#pragma once
#include <stdint.h>
#define SZ 100

#ifdef __cplusplus
extern "C" {
#endif

extern int data[SZ];

/**
 * Clear the whole list
 */

void clear();

/**
 * Init function for your list
 */

void init();

/**
 * Insert the specific elements into given location
 * @param loc the index point to the location you want to insert
 * @param val the value you want to insert
 * @return index of the location after insertion
 */

size_t insert(size_t loc, int32_t val);

/**
 * Erase the specific elements of given location
 * @param loc the index of element you want to erase
 * @return index of element point to next element after erasure
 */

size_t erase(size_t loc);

/**
 * Get the element in the back of list
 * @return value of the last element
 */

int32_t back();

/**
 * Push the element to the back of list
 * @param val value you want to push
 */

void push_back(int32_t val);

/**
 * Pop the element in the back of list
 */

void pop_back();

/**
 * Return the element at begin
 * @return value in the beginning
 */

int32_t front();

/**
 * Push the element to the front of list
 * @param val value you want to push
 */

void push_front(int32_t val);

/**
 * Pop the element in the front of list
 */

void pop_front();

/**
 * Find the element of the given value
 * @param val the value you want to find
 * @return index of the element. If not found, return the index of end
 */

size_t find(int32_t val);


/**
 * Give the size of list
 * @return return the size of list
 */

size_t size();

/**
 * Return the iterator of first element
 * @return the index of first element
 */

size_t begin();

/**
 * Return the one after the last iterator
 * @return The index of one after the last element
 */

size_t end();

#ifdef __cplusplus
}
#endif