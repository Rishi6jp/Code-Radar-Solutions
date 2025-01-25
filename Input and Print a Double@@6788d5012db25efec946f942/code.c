#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    double a;
    scanf("%lf", a);
    printf("You entered: %ls", a);
    return 0;
}