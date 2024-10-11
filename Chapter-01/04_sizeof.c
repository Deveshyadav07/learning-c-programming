#include <stdio.h>
int main(){
    /* 
    question 01) how much memory does int , char and float takes in c language?
    */
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of char: %zu byte\n", sizeof(char));
    printf("Size of float: %zu bytes\n", sizeof(float));

    /* OUTPUT in my laptop
    Size of int: 4 bytes (usually 4 bits)
    Size of char: 1 byte  (always 1 bits)
    Size of float: 4 bytes (usually 4 bits)

    1 bytes = 8 bits 
    1 bits = 0 , 1 ;

    */
    return 0;
}
