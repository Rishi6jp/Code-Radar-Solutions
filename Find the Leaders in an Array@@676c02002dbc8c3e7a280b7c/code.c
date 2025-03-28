// Your code here...

#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int leader;
    for(int i = 0; i < n-2; i++){
        if(arr[i]<=arr[i+1] && arr[i+1]>=arr[i+2]) {
            printf("%d", arr[i+1]);
        }
        if(i==n-3){
            printf("%d", arr[i]);
        }
    }


}