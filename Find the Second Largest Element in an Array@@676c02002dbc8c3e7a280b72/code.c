// Your code here...
#include <stdio.h>
#include <limits.h>


int main() {
    int n; 
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i< n; i++){
        scanf("%d", &arr[i]);
    }
    int largest=INT_MIN;
    int s_largest=INT_MIN;
    for(int i = 0; i< n; i++){
        
        if(largest<arr[i]){
            largest = arr[i];
        } 
    }
    for(int i = 0; i< n; i++){
        
        if(s_largest<arr[i] && arr[i]!=largest){
            s_largest = arr[i];
        }// else {
        //     s_largest = -1;
        // }
        if(n<=1 || s_largest == INT_MIN){
            s_largest = -1;
        }
    
    }
    printf("%d", s_largest);
    return 0;
}