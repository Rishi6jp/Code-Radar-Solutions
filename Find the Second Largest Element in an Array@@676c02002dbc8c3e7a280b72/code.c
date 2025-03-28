// Your code here...
#include <stdio.h>
#include <limits.h>

#define MIN -100000

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
            largest = arr[i];
        } else {
            s_largest = -1;
        }
    }
    printf("%d", s_largest);
    return 0;
}