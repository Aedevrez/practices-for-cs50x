#include<stdio.h>

int main() {
    char isim[20];
    printf("What is your name?\n");
    scanf("%s", isim);
    printf("Hello, %s!\n", isim);
    return 0;
}