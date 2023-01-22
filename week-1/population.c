#include<stdio.h>

int calculate_years(int begin, int end);
int take_input_for_begin();
int take_input_for_end(int begin);

int main(){
    //Take beginning and ending years
    int begin, end;
    begin = take_input_for_begin();
    end = take_input_for_end(begin);
    //Calculate years
    int years = calculate_years(begin, end);
    //Print the result
    printf("Years: %d\n", years);
}

int take_input_for_begin(){
    int begin;
    do {
        printf("Start size: ");
        scanf("%d", &begin);
    }
    while(begin < 9);
    return begin;
}

int take_input_for_end(int begin){
    int end;
    do {
        printf("End size: ");
        scanf("%d", &end);
    }
    while(end < begin);
    return end;
}

int calculate_years(int begin, int end){
    int years = 0;
    while(begin<end){
        begin = (4 * begin / 3) - (begin / 4);
        years++;
    }
    return years;
}