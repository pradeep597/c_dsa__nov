#include<stdio.h>
int main(){
    int n;
    printf("enter the no:");
    scanf("%d",&n);
    int c=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==2){
        printf(" prime\n ");
    }else{
        printf(" not prime\n");
    }
}