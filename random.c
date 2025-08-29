#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rand_string(char *s, size_t size){

    char characters[] = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < size; i++){
        int character = rand() % 26;
        s[i] = characters[character];

    }

    s[size] = '\0';
}