// Your code here...
#include <stdio.h>

int main() {
    int n; 
    int arr[n];
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int start = 0;
    int end = n-1;
    while(start==end){
        if(arr[start]==arr[end]){
            printf("YES");
            return 0;
        }else{printf("NO");
    return 0;

        }
        start++;
        end--;
    }
    
}