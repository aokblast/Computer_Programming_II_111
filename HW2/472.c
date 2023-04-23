#include "stdio.h"
#include "stdlib.h"

int getCombination(int idx, int cost, int target, int *arr,int arrLen) {
    if(idx >= arrLen || cost >= target) {
        if(cost == target) {
            return 1;
        }
        return 0;
    }

    int res = 0;
    
    for(int i = idx ;i < arrLen;i++) {
        res += getCombination(i + 1,cost + arr[i],target,arr,arrLen); // take bag i
    }

    return res;
}

int main() {
    int n,k;
    int *arr = NULL;

    scanf("%d",&n);
    arr = (int*)malloc(sizeof(int)*n);
    for(int i = 0;i < n;i++) {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);

    printf("%d\n",getCombination(0,0,k,arr,n));

    free(arr);
    return 0;
}

