#pragma once
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Clear the whole list
 */

void clear();

/**
 * Insert the specific elements into given location
 * @param loc the pointer point to the location you want to insert
 * @param val the value you want to insert
 * @return pointer to the location you want to insert
 */

int32_t *insert(int32_t *loc, int32_t val);

/**
 * Erase the specific elements of given location
 * @param loc the location of element you want to erase
 * @return the location of element of same index after erasure.
 */

int32_t *erase(int32_t *loc);

/**
 * Get the element in the back of list
 * @return value of the last element
 */

int32_t back();

/**
 * Push the element to the back of list
 * @param val value you want to insert
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
 * @param val value you want to insert
 */

void push_front(int32_t val);

/**
 * Pop the element in the front of list
 */

void pop_front();

/**
 * find the element of the given value
 * @param val the value you want to find
 * @return pointer of the value. If not found, return NULL
 */

int32_t *find(int32_t val);


/**
 * give the size of lsit
 * @return return the size of list
 */

uint64_t size();

#ifdef __cplusplus
}
#endif