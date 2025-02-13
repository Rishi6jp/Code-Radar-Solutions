// Your code here...
#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);
    if(65<=a && a<=90 || 97<=a && a<=122){
        if(a=='a'|| a=='e' || a == 'i' || a=='o' || a == 'u'|| a == 'O'){
        printf("Vowel");
        } else {
        printf("Consonant");
        }
    } else if (48<=a && a<=57){
        printf("Digit");
    } else {
        printf("Special Character");
    }
}