#include <stdio.h>

void main() {
    FILE *ptr;
    ptr = fopen("../vikash.txt", "r");
    char c;
    fscanf(ptr, "%c", &c);
    printf("The character is %c\n", c);
    fclose(ptr);
}