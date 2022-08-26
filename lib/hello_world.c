//
// Created by Josean Camarena on 07/07/22.
// Implemented by: $STUDENT$
//

#include "hello_world.h"

void simple_hello(){
    printf("Hello World!\n");
}
void greet(char* target){
    printf("Hello %s!\n", target);
}
void say_goodbye(char* target){
    printf("Bye %s!\n", target);
}
void reverse_greet(char* target){
    int i, j;
    char temp;
    for(i = 0; target[i] != '\0'; i++);
    //printf("Lenght: %d\n", i);
    j = i - 1;
    printf("Hello ");
    for(j; j>=0; j--)
    {
        printf("%c", target[j]);
    }
    printf("!\n");
}
