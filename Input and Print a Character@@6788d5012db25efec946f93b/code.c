#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char var;
    scanf("%c", &var);
    printf("You entered: %c", var);
    return 0;
}