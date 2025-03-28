// Your code here...
#include <stdio.h>

int main() {
    int n; 
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int count = 0;
    int ele = 0;
    int m_ele = 0;
    int f_count = -1;
    for ( int i = 0; i<n; i++){
        ele = arr[i];
        for(int j = i; j<n; j++){
            if(ele == arr[j] && ele!= -1){
                count += 1;
                arr[j] = -1;
            }
        }
        if(count > n/2 && ele != -1){
            printf("%d\n", ele);
        
        }
        count = 0;  
    }
    
}