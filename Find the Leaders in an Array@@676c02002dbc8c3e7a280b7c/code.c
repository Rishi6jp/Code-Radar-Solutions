// Your code here...

#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[i];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int leader = IN_MIN;
    for(int i = 0; i < n; i++){
        
        if(arr[i]<arr[i+1]){
            leader = arr[i+1];
            printf("%d ", leader);
        }



        if(i==n-1){
            printf("%d", arr[i]);
        }
    }


}