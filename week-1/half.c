#include<stdio.h>

float take_float_input();
float calculate_total_half(float bill, float tax, float tip);

int main(){
    float bill, tax, tip;
    //Take bill input
    printf("Bill before tax and tip: ");
    bill = take_float_input();
    //Take tax input
    printf("Sale Tax Percent: ");
    tax = take_float_input();
    //Take tip input
    printf("Tip percent: ");
    tip = take_float_input();
    //Calculate total value, then half of it
    float total_half = calculate_total_half(bill, tax, tip);
    printf("You will owe $%.2f each!\n", total_half);
}

float take_float_input(){
    float input;
    do {
        scanf("%f", &input);
    }
    while(input<0);
    return input;
}

float calculate_total_half(float bill, float tax, float tip){
    bill += (bill * tax) / 100;
    bill += (bill * tip) / 100;
    bill /= 2;
    return bill;
}