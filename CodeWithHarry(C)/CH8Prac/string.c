#include <stdio.h>

int my_strlen(char str[]){
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}
int main() {
    char str[] = "vikash";
    printf("%d", my_strlen(str));
    return 0;
}