#include <stdio.h>
#include <string.h> 


void sort(char **array) {
    if (array == NULL) {
        return; 
    }

    // Tri à bulles
    for (int i = 0; array[i] != NULL; i++) {
        for (int j = i + 1; array[j] != NULL; j++) {
            // Compare les chaînes en ordre ASCII
            if (strcmp(array[i], array[j]) > 0) {
                
                char *temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}
