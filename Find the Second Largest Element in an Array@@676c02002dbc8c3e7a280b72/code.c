// Your code here...
#include <stdio.h>

#define MIN -100000

int main() {
    int n; 
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i< n; i++){
        scanf("%d", &arr[i]);
    }
    int largest=MIN;
    int s_largest=-1;
    for(int i = 0; i< n; i++){
        
        if(largest<arr[i] && n>1){
            s_largest = largest;
            largest = arr[i];
        } 
    }
    printf("%d", s_largest);
    return 0;
}