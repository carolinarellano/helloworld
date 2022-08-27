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

    for(i = 0; target[i] != '\0'; i++);

    char temporal;
    i = i - 1;
    j = 0;
    while (i > j)
    {
        temporal = target[j];
        target[j] = target[i];
        target[i] = temporal;
        j++;
        i--;
    }
    printf("Hello %s", target);
}
