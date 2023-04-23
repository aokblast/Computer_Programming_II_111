#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 12

char strs[N][50];

int cmp(const void *val1, const void *val2) {
    return strcmp(strs[*((const int*)val1)], strs[*((const int*)val2)]);
}

int main() {
    for(int i = 0; i < N; ++i)
        scanf(" %s", strs[i]);

    int indexes[N];

    for(int i = 0; i < N; ++i)
        indexes[i] = i;

    qsort(indexes, N, sizeof(indexes[0]), cmp);

    for(int i = 0; i < N; ++i)
        printf("%d\n", indexes[i]);

}
