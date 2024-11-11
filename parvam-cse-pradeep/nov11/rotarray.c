#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("array elements");
        scanf("%d",&arr[i]);
    }
    int temp=arr[n-1];
    for(int i=0;i<n)