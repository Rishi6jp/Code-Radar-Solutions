// Your code here...

#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int leader = 1;// true = 1, false = 0
    for(int i = 0; i < n; i++){
        for(int j = i; j< n-1; j++){
            if(arr[i]>=arr[j+1]){
                leader = 1;
            } else leader = 0; break;
        }
        if(leader) printf("%d ", arr[i]);
        
    }
   
}