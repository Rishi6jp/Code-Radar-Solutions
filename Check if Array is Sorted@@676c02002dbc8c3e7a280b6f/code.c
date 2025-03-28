// Your code here...

#include <stdio.h>
#include <stdbool.h>
int main() {
    int n; 
    scanf("%d", &n);
    int arr[n];

    for( int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    bool sorted = true;
    for(int i = 0; i < n; i++){
        if(arr[i]<=arr[i+1]){sorted = true;}
        else{
            sorted = false;
            break;
        }
    }
    if(sorted) printf("Sorted");
    else printf("Not Sorted");
    return 0;
}