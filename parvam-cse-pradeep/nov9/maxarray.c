#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=arr[0];i<n;i++){
        printf("array elements");
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=arr[0];i<n;i++){
        if(arr[i]<max){
            max=arr[i];
        }
    }
    printf("biggest  no:%d",max);
}