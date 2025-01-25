#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

#define INT_MAX 100000;

int main() {
    char name[] = (int)malloc(sizeof(int));
    char hobby[] = (int)malloc(sizeof(int));
    int age;
    scanf("%s %d %s", &name, &hobby, &age);
    print("Name: %s\nAge: %i\nHobby: %s", name, age, hobby);
    return 0;
}