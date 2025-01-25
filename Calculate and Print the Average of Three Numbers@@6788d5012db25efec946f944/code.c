#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a,b,c,sum;
    sum = 0;
    scanf("%d %d %d", &a,&b,&c);
    sum = a + b + c;
    printf("Average: %.2f", sum/3);
    return 0;
}