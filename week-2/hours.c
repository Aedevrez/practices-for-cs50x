#include <stdio.h>
#include <ctype.h>

//This doesn't work yet, I'll take care of it another day

int calc_hours(int array[], int array_size, char mode);

int main() {
    printf("Number of weeks taking CS50: ");
    int hour_count;
    scanf("%d", &hour_count);
    int hours[hour_count];
    for(int i = 0; i < hour_count; i++) {
        printf("Week %d HW Hours: ", i);
        scanf("%d", &hours[i]);
    }

    printf("Enter T for total hours, A for average hours per week: ");
    char mode = 'T';

    int answer = calc_hours(hours, hour_count, mode);
    printf("%d hours\n", answer);
    return 0;
}

int calc_hours(int array[], int array_size, char mode) {
    int array_total = 0;
        for(int i = 0; i < array_size; i++){
            array_total += array[i];
        }
    if (toupper(mode) == 'A') {
        return (float) (array_total / array_size);
    }
    else if (toupper(mode) == 'T') {
        return (float) array_total;
    }
}