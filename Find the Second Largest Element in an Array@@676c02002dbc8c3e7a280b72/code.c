// Your code here...
#include <stdio.h>

int main() {
    int n; 
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i< n; i++){
        scanf("%d", &arr[i]);
    }
    int largest=0;
    int s_largest=largest;
    for(int i = 0; i< n; i++){
        if(largest<arr[i]){
            s_largest = largest;
            largest = arr[i];
        }
    }
    if(s_largest == 0) printf("%d", -1);
    else printf("%d", s_largest);
    return 0;
}