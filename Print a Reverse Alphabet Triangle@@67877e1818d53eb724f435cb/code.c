
#include<stdio.h>

int k=1;

int main() {
    int n; 
    scanf("%d", &n);

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n-i+1; j++) {printf("%c ", j+64);}
        printf("\n");
    }
}