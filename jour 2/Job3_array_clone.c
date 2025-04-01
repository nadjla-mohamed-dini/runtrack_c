#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **array_clone(char **str, int n) {
    if (str == NULL || n <= 0) {
        return NULL; 
    }

    int count = 0;
    while (count < n && str[count] != NULL) {
        count++;
    }
}
