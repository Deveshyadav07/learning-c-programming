#include <stdio.h>
int main(){
    /* question 01)- Write a program to convert Celsius (Centigrade degrees temperature to
Fahrenheit).
*/
    float c;
    scanf("%f", &c);
    float cal = c * 1.8 + 32; // cal = ((9.0/5.0)*c) + 32;
    printf("%f", cal);
}