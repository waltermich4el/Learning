#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

// TASK: As a user i would like to have an app that gives the product of two numbers and check for the correct input.

void multiply(long a, long b) // Function to perform the multiplication
{
    /*This method is called by user_input*/
    printf("The product of the two numbers is: %ld", a * b);
}

void user_input() //Function that gets the user input and acts accordingly
{
    /*This function is called from the main() function 
    and checks if the user input is an integer. If another value is 
    given by the user, then it asks for the appropriate one.
    At the end, it asks the user if he wants to restart.*/

    //Defining local variables
    char yesno; //char to store the user input "Y"/"N" if he wants to re-use the app.
    char *pa, *pb, a[100], b[100]; // variables to store the user input
    long la; //Long signed integer type. Capable of containing at least the [−2,147,483,647, +2,147,483,647] range.
    long lb;

    while (fgets(a, sizeof(a), stdin)) //store the user input
    {
        la = strtol(a, &pa, 10);
        if (pa == a || *pa != '\n')
        {
            printf("Please enter an integer: ");
        }
        else
            break;
    }
    printf("Your first number is: %ld\n", la);

    printf("Please input second number:\n");

    while (fgets(b, sizeof(b), stdin))
    {
        lb = strtol(b, &pb, 10);
        if (pb == b || *pb != '\n')
        {
            printf("Please enter an integer: ");
        }
        else
            break;
    }
    printf("You second number is: %ld\n", lb);

    multiply(la, lb);

    //Recursion of function user_input();
    printf("\n\nWould you like to start again?(Y/N): ");
    scanf("%c", &yesno);
    if (yesno == 'Y' || yesno == 'y')
    {
        user_input();
    }
    else
    {
        printf("Program Terminated\n");
        _Exit(0);
    }
}

int main()
{
    printf("\nHello! Please input two int numbers:"); // We print the task
    fflush(stdin);
    user_input();
}
