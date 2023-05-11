#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 1;
    const int MAX = 50;
    int guess;
    int guesses;
    int answer;

    //uses current time as a seed
    srand(time(0));

    //generates a random number between MIN and MAX;
    answer = (rand() % MAX) + MIN;

    do
    {
        printf("Enter a guess : "); 
        scanf("%d", &guess);
        if (guess > answer)
        {
            printf("Too High!\n");
        }
        else if (guess < answer)
        {
            printf("Too Low!\n");
        }
        else
        {
            printf("CORRECT !\n");
        }
        guesses++;  
    } while (guess != answer);

    printf("**********************\n");
    printf("answer: %d\n", answer);
    printf("guesses: %d\n", guesses);
    printf("**********************");
    

    return 0;
}