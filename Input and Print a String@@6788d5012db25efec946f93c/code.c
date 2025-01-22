#include <stdio.h>
#include <string.h>
char* welcome() {
    return "Welcome to Code Radar!";
}
#define MAX_INT 10000;

int main() {
    char var[MAX_INT];
    scanf("%s", &var);
    printf("You entered: %s",var );
    return 0;
}