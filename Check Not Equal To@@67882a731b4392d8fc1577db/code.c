#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%s", (a!=b) ? "True" : "False");
    return 0;
}