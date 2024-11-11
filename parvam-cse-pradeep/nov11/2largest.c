#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("array elements");
        scanf("%d",&arr[i]);
    }
    int max1=__WINT_MIN__;
    int max2=__WINT_MIN__;
    for(int i=0;i>n;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2){
            max2=arr[i];
        }
    }                                                              
    printf("2nd largest no:%d",max2);
}