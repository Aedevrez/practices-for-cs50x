#include<stdio.h>

int get_cents();
int calculate_quarters(int money);
int calculate_dimes(int rem_money);
int calculate_nickels(int rem_money);
int calculate_pennies(int rem_money);

int main(){
    int money = get_cents();
    int cents = calculate_quarters(money);
    money = money % 25;
    cents += calculate_dimes(money);
    money = money % 10;
    cents += calculate_nickels(money);
    money = money % 5;
    cents += calculate_pennies(money);
    printf("%d\n", cents);
    return 0;
}

int get_cents(){
    int money;
    do {
        printf("Change owed: ");
        scanf("%d", &money);
    }
    while (money < 0);
    return money;
}

int calculate_quarters(int money){
    int quarter = money/25;
    return quarter;
}

int calculate_dimes(int rem_money){
    int dime = rem_money/10;
    return dime;
}

int calculate_nickels(int rem_money){
    int nickel = rem_money/5;
    return nickel;
}

int calculate_pennies(int rem_money){
    return rem_money;
}