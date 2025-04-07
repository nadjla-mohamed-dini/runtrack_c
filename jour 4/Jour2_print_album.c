#include "print_album.h"
#include <stdio.h>

void print_album(const album *a) {
    // verifier si a n'est pas nul
    if (a != NULL) {
        printf("\"%s\" by \"%s\" releaded in%d\n", a->title, a->artist, a->year);
    }
}