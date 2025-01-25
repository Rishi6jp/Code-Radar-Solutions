#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char name[30],hobby[30]
    int age;
    scanf("%s %d %s", &name, &hobby, &age);
    print("Name: %s\nAge: %i\nHobby: %s", name, age, hobby);
    return 0;
}