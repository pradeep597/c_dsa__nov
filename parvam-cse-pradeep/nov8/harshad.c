#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d", &n);
    int temp=n;
    int r=0;
    while(n!=0){
        int rem=n%10;
        r=r+rem;
        n=n/10;
    }
    if(temp%r==0){
        printf("harshad\n");
    }else{
        printf("not harshad\n");
    }
}