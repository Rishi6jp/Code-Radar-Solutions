// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0;i<n; i++){
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for(int i = 0; i<n; i++){
        int ele = arr[i];
        for(int j = i; j<n; j++){
            if(ele== arr[j] && arr[i] != -1){
                count += 1;
                arr[j] = -1;
            }

        }
        if(ele!=-1)printf("%d %d\n", ele, count);
        count = 0;
    }
}