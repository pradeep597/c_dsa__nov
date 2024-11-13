#include<stdio.h>
int isSufficient(int n,int arr[],int enough){
    if(n==0){
        return -1;
    }
    int total=0;
    for(int i=0;i<n;i++){
        total=total+arr[i];
        if(total>=enough){
            return i+1;
        }
    }
    return 0;
}
int main(){
    int a;
    scanf("%d",&a);
    int unit;
    scanf("%d",&unit);
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int enough=a*unit;
    printf("%d",isSufdt(n,arr,enough));

}
