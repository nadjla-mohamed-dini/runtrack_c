void swap(int *a, int *b) {
    int temp = *a;  //utilisation d'une valeur temporaire
    *a=*b;
    *b=temp;
}