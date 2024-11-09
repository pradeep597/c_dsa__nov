#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int *dynamic=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("enter the elements:");
        scanf("%d",&dynamic[i]);
    }
    int extra;
    printf("enter the size to be extended:");
    scanf("%d",&extra);
    dynamic=realloc(dynamic,(n+extra)*sizeof(int));
    for(int i=n;i<(n+extra);i++){
        printf("enter the elements:");
        scanf("%d",&dynamic[i]);
    }
    printf("after reallocation:");
    for(int i=0;i<(n+extra);i++){
        printf("%d  ",dynamic[i]);
    }
}