#include <stdio.h>
int main(){
    /* question 01)- Write a program to calculate simple interest for a set of values representing
principal, number of years and rate of interest and also calculate Total ammount?
*/
    float P; // P = principal
    float T; // time duration (in years) =R
    float R; // R = interest rate (in percentage)
    scanf("%f", &P);
    scanf("%f", &R);
    scanf("%f", &T);
    float SI = ((P * T * R) / 100);
    printf("the value of  simple intrest : %f\n", SI);
    float A = P + SI; // Amount that someone  has to pay  at the end of the year
    printf("the value of total ammount : %f", A);
    return 0;
}