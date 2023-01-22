#include<stdio.h>
#include<stdbool.h>

long get_card_number();
bool luhn_algo(long card);
void which_brand(long card);

int main(){
    //Get credit card number
    long card = get_card_number();
    //Check Luhn's Algo
    if (luhn_algo(card)) {
        //If it's a credit card, determine which brand
        which_brand(card);
        return 0;
    }
    else {
        printf("INVALID\n");
    }
}

long get_card_number(){
    long card;
    do {
        printf("Number: ");
        scanf("%ld", &card);
    }
    while ( card < 99999999);
    return card;
}

bool luhn_algo(long card){
    int check = 0;
    for(int i = 1; card>0; card /= 10){
        if (i%2 == 1){
            check += card%10;
        }
        else {
            int doubled_value = 2 * (card%10);
            check += doubled_value/10;
            check += doubled_value%10;
        }
        i++;
    }
    if (check%10 == 0){
        return true;
    }
    else {
        return false;
    }
}

void which_brand(long card){
    if(card / 10000000000000 == 34 || card / 10000000000000 == 37){
        printf("AMEX\n");
    }
    else if(card / 100000000000000 == 51 || card / 100000000000000 == 52 || card / 100000000000000 == 53 || card / 100000000000000 == 54 || card / 100000000000000 == 55){
        printf("MASTERCARD\n");
    }
    else{
        printf("VISA\n");
    }
}