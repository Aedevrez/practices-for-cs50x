#include<stdio.h>

int get_user_input();
void print_double_pyramid(int number);

int main(){
    int number = get_user_input();
    print_double_pyramid(number);
}

int get_user_input(){
    int number;
    do{
        printf("Enter number: ");
        scanf("%d", &number);
    }
    while(number < 1);
    return number;
}

void print_double_pyramid(int number){
    for(int i = 1; i <=number; i++){
        for(int j = 1; j<=(2*number +1);j++){
            if(j <= number){
                if(i+j<number+1){
                    printf(" ");
                }
                else{
                    printf("#");
                }
            }
            else if(j==number+1){
                printf(" ");
            }
            else{
                if(j<=(i+number+1)){
                    printf("#");
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}