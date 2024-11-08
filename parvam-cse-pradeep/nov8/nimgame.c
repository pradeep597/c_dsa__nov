#include<stdio.h>
int main(){
    int n;
    printf("enter the no of stones:");
    scanf("%d",&n);
    if(n%4==0){
        printf(" false\n ");
    }else{
        printf(" true\n");
    }
}