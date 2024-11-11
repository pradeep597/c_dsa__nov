#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("array elements");
        scanf("%d",&arr[i]);
    }
    int min1=__WINT_MIN__;
    int min2=__WINT_MIN__;
    for(int i=0;i>n;i++){
        if(arr[i]<min1){
            min2=min1;
            min1=arr[i];
        }
        else if(arr[i]<min2){
            min2=arr[i];
        }
    }                                                              
    printf("2nd smallest no:%d",min2);
}