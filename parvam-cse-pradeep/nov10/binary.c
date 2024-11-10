#include<stdio.h>
int ispresent(int n,int arr[],int target){
    int left=0,right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(target<arr[mid]){
            right=mid-1;
        }else{
            left=mid+1;

        }


    }
    return -1;
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