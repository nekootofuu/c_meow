#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand(time(NULL)); // Seed the random number generator with the current time
    int random_number = rand() % 100 + 1; // Generate a random number between 1 and 100
    int count = 0;
    int a=0;
    printf("Random number between 1 and 100", random_number);
    do{
        printf("Enter your guess (1-100): ");
        scanf("%d", &a);
        count++;
        if(a < random_number){
            printf("Too low! Try again.\n");
        } else if(a > random_number){
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", count);
        }
    } while(a != random_number);
    printf("time: %d\n", count);
    return 0;
}