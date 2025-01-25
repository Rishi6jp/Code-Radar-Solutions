#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a,b,c,sum;
    sum = 0;
    scanf("%f %f %f", &a,&b,&c);
    sum = a + b + c;
    printf("Average: %.2f", sum/3);
    return 0;
}