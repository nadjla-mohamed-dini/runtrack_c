#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef void (*func_ptr)(char *);


void func_to_array(char **array, func_ptr function) {
    if (array == NULL || function == NULL) {
        return; 
    }

    for (int i = 0; array[i] != NULL; i++) {
        function(array[i]); // Applique la fonction à chaque chaîne
    }
}
