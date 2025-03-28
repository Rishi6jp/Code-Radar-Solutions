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
    int s_largest=-1;
    for(int i = 0; i< n; i++){
        
        if(largest<arr[i] && n>1){
            s_largest = largest;
        } 
    }
    for(int i = 0; i< n; i++){
        
        if(s_largest<arr[i] && n>1 && arr[i]!=largest){
            s_largest = arr[i];
        } 
    }
    printf("%d", largest);
    return 0;
}