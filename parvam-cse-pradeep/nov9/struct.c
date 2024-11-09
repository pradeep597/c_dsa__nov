#include<stdio.h>
struct student
{
    int rollno;
    float result;
};
int main(){
    struct student s;
    s.rollno=24;
    s.result=9.8;
    printf("%d  ",s.rollno);
    printf("%f  ",s.result);
}