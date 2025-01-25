#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d", &a);
    printf("%s", !(a>0)? "True" : "False");
    return 0;
}