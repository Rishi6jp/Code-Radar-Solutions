// Your code here...
#include <stdio.h>


int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }

    for(int i = 0; i<n-1; i++){
        if(arr[i+1] = arr[i] + 1){
            continue;
        } else {
            printf("%d", arr[i] + 1);
            return 0;
        }
        
    }

}