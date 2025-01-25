#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}


int main() {
    char *name[] = (char*)malloc(sizeof(char*));
    char *hobby[] = (char*)malloc(sizeof(char*));
    int age;
    scanf("%s %d %s", name, hobby, &age);
    print("Name: %s\nAge: %i\nHobby: %s", name, age, hobby);
    return 0;
}