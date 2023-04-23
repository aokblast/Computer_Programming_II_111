#include "stdio.h"

int main() {
    char a[6];
    char b[6];
    scanf("%s", a);
    scanf("%s", b);
    char res[6] = {0};
    int chars[150] = {0};
    for (int i = 0; i < 5; ++i) {
        res[i] = '-';
        chars[b[i]]++; // get the counts of each characters
    }
    for (int i = 0; i < 5; ++i) {
        if (a[i] == b[i]) {
            res[i] = 'G';
            chars[a[i]]--;
        }
    }
    for (int i = 0; i < 5; ++i) {
        if (a[i] != b[i] && chars[a[i]] > 0) {
            res[i] = 'Y';
            chars[a[i]]--;
        }
    } 
    printf("%s\n", res);
}

