// Your code here...
#include <stdio.h>

int main() {
    int n; 
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int peak = -1;
    for(int i = 0; i<n-1; i++){
        if(arr[i]<arr[i+1]){
            peak = arr[i+1];
        } else break;
    }

    printf("%d", peak);
    
}