
#include<stdio.h>

int k=1;

int main() {
    int n; 
    scanf("%d", &n);

    for(int i = 1; i<=10; i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }
}