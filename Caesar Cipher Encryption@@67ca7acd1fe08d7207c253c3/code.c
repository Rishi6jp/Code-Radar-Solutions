#include <stdio.h>
#include <string.h>
#include<ctype.h>

char* caesarCipher(char message[100], int shift, char encrypted[100]){
    for(int i = 0; i< 100; i++){
        encrypted[i] = message[i]+shift;
    }
    return encrypted;
}

int main() {
    char message[100]; 
    int shift; 
    char encrypted[100]; 

    scanf("%[^\n\]s", message);

    scanf("%d", &shift);

    shift = shift % 26;
    if (shift< 0) shift += 26; 

    encrypted = caesarCipher(message, shift, encrypted);

    printf("%s\n", encrypted);

    return 0;
}