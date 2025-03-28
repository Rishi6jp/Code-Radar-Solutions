#include <stdio.h>

void reversed(int arr[], int start, int end){
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    } 
}

void output(int arr[],int n,int k){

    reversed(arr, 0 , n-1);

    reversed(arr, 0, k-1);

    reversed(arr, k , n-1);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int k;
    scanf("%d", &k);

    output(arr, n, k);

    for ( int i = 0; i<n; i++){
        printf("%d\n", arr[i]);
    }
    return 0;


}

