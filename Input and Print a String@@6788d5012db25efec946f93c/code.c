#include <stdio.h>
#include <string.h>
char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char var[30];
    scanf("%s", var);
    printf("You entered: %s",var );
    return 0;
}