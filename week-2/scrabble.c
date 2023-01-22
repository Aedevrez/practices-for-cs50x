#include <stdio.h>
#include <string.h>
#include <ctype.h>

int letter_to_point(char * word);

int main(){
    char * word_one;
    printf("Player 1: ");
    scanf("%s", word_one);
    int score_one = letter_to_point(word_one);

    char * word_two;
    printf("Player 2: ");
    scanf("%s", word_two);
    int score_two = letter_to_point(word_two);

    if (score_one > score_two) {
        printf("Player 1 wins!\n");
        return 0;
    }
    else if (score_one < score_two) {
        printf("Player 2 wins!\n");
        return 0;
    }
    else {
        printf("Tie!\n");
        return 0;
    }
}

int letter_to_point(char * word){
    char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int points[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int word_point = 0;
    for(int i = 0, str_length = strlen(word); i < str_length; i++){
        word[i] = tolower(word[i]);
        for(int j = 0; j < 26; j++) {
            if (word[i] == alphabet[j]) {
                word_point += points[j];
                break;
            }
            else{
                continue;
            }
        }
    }
    return word_point;
}