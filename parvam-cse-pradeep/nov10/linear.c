#include<stdio.h>
int ispresent(int n,int arr[],int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return 1;
        }
    }
    return 0;
}
int main(){
int n;
    printf("size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elelment:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    printf("enter the target element");
    scanf("%d",&target);
    printf("%d",ispresent(n,arr,target));
}