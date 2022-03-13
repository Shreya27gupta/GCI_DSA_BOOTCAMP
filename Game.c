#include <stdio.h>
#include <stdlib.h>
#include<time.h>
// #include <conio.h>
int main()
{

    system("cls");
    int number,guess,nguesses=1;
    srand(time(0));
    number = rand() % 100 + 1;                  //generates a random number between 1 to 100.
    // printf("The number is : %d\n",number); 
    do{                                         //keep running the loop until the number is guessed.
        printf("Guess the number between 1 and 100 : ");
        scanf("%d",&guess);
        if(guess>number)
        {
            printf("Lower number please.\n");
        }
        else if(guess<number)
        {
            printf("Higher number please.\n");
        }
        else
        {
            printf("You guessed it in %d attempts.",nguesses);
        } 
        nguesses++;
    }while(guess!=number);
    
    return 0;
}

/* *************************Game1.c************************* */

/* OR THE NUMBER OF ATTEMPTS CAN BE DISPLAYED AFTER THE LOOP HAS ENDED */

// #include <stdio.h>
// #include <stdlib.h>
// #include<time.h>
// // #include <conio.h>
// int main()
// {
//     system("cls");
//     int number,guess,nguesses=0;
//     srand(time(0));
//     number = rand() % 100 + 1;                  //generates a random number between 1 to 100.
//   //printf("The number is : %d\n",number); 
//     do{                                         //keep running the loop until the number is guessed.
//         printf("Guess the number between 1 and 100.\n");
//         scanf("%d",&guess);
//         if(guess>number)
//         {
//             printf("Lower number please.\n");
//         }
//         else if(guess<number)
//         {
//             printf("Higher number please.\n");
//         }
//         nguesses++;
//     }while(guess!=number);
//     printf("You guessed it in %d attempts.", nguesses); 
//     return 0;
// }