// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0;i<n; i++){
        scanf("%d", &arr[i]);
    }
    int count = 1;
    for(int i = 0;i<n; i++){
        int ele = arr[i];
        for(int j = i+1;j<n; j++){
            if(arr[i] == arr[j] && ele != -1){
                count += 1;
                arr[j] = -1;
            }
            
    }if(ele!=-1) printf("%d %d\n", ele, count);
    count = 0;
    }
    return 0;
}