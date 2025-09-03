#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses=0;
    int guessed;

   do
    {
         printf("\nGuess a number : ");
         scanf("%d", &guessed);
         if (guessed<randomNumber)
         {
            printf("Higher no. please!\n");
         }

         else if (guessed>randomNumber)
         {
            printf("Lower no. please!\n");
         } 
         
         else{
            printf("Congratulations, you have guessed the no.\n");
         }
         no_of_guesses++;
         

    } while (guessed != randomNumber);

    printf("You guessed the no. in %d attempts!", no_of_guesses);
    
    return 0;
}
