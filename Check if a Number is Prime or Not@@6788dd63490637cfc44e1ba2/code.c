// Your code here...
#include <stdio.h>
#include <math.h>

int isPrime(x){
    int count= 0;
    for(int i = 0, i<=pow(x, 1/2), i++){
        if (x%i==0){
            count++;
        }
        if(count>2){
            return True;
        }
    }
    return false;
}
int main(){
    int a;
    scanf("%d", &a);
    if(isPrime(a)){
        printf("Prime");
    } else {
        printf("Not Prime");
    }
    return 0;
}