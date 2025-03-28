// Your code here...

#include <stdio.h>

int main(){
    int n; 
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i< n; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(arr[i]<arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int count = 1;
    
    for(int i = 0; i<n-1; i++){
        if(arr[i+1] == arr[i]+1){ count++;}
    
    }
    printf("%d\n", count);
}


