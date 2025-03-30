// Your code here...
// Your code here...
// Your code here...
#include<stdio.h>

int k=1;

int main() {
    int n; 
    scanf("%d", &n);

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++) {printf(k);k++;}
        printf("\n");
    }
}