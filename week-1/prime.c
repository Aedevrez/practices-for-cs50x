#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int take_begin_num();
int take_end_num(int begin);
bool is_prime(int num);
void print_primes(int begin, int end);

int main(){
    //Take begin num
    int begin = take_begin_num();
    //Take end num
    int end = take_end_num(begin);
    //Print prime numbers in the span
    print_primes(begin, end);
}

int take_begin_num(){
    int begin;
    do {
        printf("Minimum: ");
        scanf("%d", &begin);
    }
    while(begin < 0);
    return begin;
}

int take_end_num(int begin){
    int end;
    do {
        printf("Maximum: ");
        scanf("%d", &end);
    }
    while(end <= begin);
    return end;
}

bool is_prime(int num){
    int sq_root = (int) (sqrt((double) num));
    for(int i = 2; i <= sq_root; i++){
        if(num%i == 0){
            return false;
        }
        else {
            continue;
        }
    }
    return true;
}

void print_primes(int begin, int end){
    for(int i = begin; i <= end; i++){
        if(is_prime(i)){
            printf("%d\n", i);
        }
        else{
            continue;
        }
    }
}