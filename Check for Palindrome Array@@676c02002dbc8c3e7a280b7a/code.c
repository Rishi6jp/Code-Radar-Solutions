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
    int cond = 1;
    while(start==end){
        if(arr[start]!=arr[end]){
            cond = 0;
            break;
        }
        start++;
        end--;
    }
    if(cond){
        printf("YES");
    } else {
        printf("NO")
    }
    
}