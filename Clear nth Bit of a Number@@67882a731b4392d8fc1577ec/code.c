#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}
int replacer(x,y){
   int mask = ~(1 << y);
   return a & mask;
}

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    a = replacer(a,b);
    printf("%d", a);
    
}