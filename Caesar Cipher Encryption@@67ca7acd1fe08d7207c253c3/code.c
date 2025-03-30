#include <stdio.h>
#include <string.h>
#include<ctype.h>

char* caesarCipher(char message[100], int shift, char encrypted[100]){
    for(int i = 0; i< 100; i++){
        encrypted[i] = message[i]+shift;
    }
    return encrypted;
}

