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
    for(int i = 0; i < n; i++){
        for(int j = i; j< n; j++){
            if(arr[i]>arr[j]){
                printf("%d ", arr[i]);
            }
        }
        
    }
    printf("%d", arr[n-1]);
}