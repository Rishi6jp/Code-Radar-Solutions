// Your code here...
#include <stdio.h>

int main() {
    int n; 
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i< n; i++){
        scanf("%d", &arr[i]);
    }
    int largest=INT_MIN;
    int s_largest=largest;
    for(int i = 0; i< n; i++){
        if(largest<arr[i]){
            s_largest = largest;
            largest = arr[i];
        } else {
            s_largest = -1
        }
    }
    printf("%d", s_largest);
    return 0;
}