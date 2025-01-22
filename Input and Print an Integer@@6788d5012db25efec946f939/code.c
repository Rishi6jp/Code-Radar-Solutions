#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int var;
    scanf("%d", &var);
    printf("You entered: %d", var);
    return 0;
}