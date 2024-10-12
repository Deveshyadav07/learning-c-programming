#include <stdio.h>
int main(){
    /* Question 01). Write a C program to calculate area of a rectangle?
     */
    /*  a. Using hard coded inputs?
     */
    // int a=5;
    // int b=12;
    // int c= a*b;
    // printf("area of rectogal is : %d", c);

    /*  b. Using inputs supplied by the user?
     */
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    int c = a * b;

    printf("area of rectogal is : %d", c);
    return 0;
}