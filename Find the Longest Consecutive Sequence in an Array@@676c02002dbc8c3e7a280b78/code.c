// Your code here...

#include <stdio.h>

int main(){
    int n; 
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i< n; i++){
        scanf("%d", &arr[i]);
    }
    int count = 1;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    count = 0;
    int f_count =0;
    for(int i = 0; i<n; i++){
        if(arr[i]==arr[i]-1){
            count +=1;
        }
    }
    printf("%d", f_count);
}


