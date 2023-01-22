#include<stdio.h>

int get_user_input();
void print_pyramid(int number);

int main() {
    //Get user input
    int number = get_user_input();
    //Print pyramid
    print_pyramid(number);
    return 0;
}

int get_user_input(){
    int number;
    do {
        printf("Enter number: ");
        scanf("%d", &number);
    }
    while(number < 1);
    return number;
}

void print_pyramid(int number){
    for(int i = 1; i<=number; i++){
        for(int j = 1; j<=number; j++){
            if (i+j < (number+1)){
                printf(" ");
            }
            else{
                printf("#");
            }
        }
        printf("\n");
    }
}