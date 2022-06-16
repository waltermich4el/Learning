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


void user_input() // Function that gets the user input and acts accordingly
{
    /*This function is called from the main() function
    and checks if the user input is an integer. If another value is
    given by the user, then it asks for the appropriate one.
    At the end, it asks the user if he wants to restart.*/

    // Defining local variables
    char yesno[2]; // char to store the user input "Y"/"N" if he wants to re-use the funstions
    char *pa, *pb, a[50], b[50]; // variables to store the user input, a[] nad b[] are memory buffers;
    long la;                     // Long signed integer type. Capable of containing at least the [−2,147,483,647, +2,147,483,647] range.
    long lb;

    while (fgets(a, sizeof(a), stdin)) // store the user input from the input stream (stdin) and loop until the correct input is given
    /* char *fgets(char *str, int n, FILE *stream) reads a
     line from the specified stream and stores it into the string pointed to by str.
     It stops when either (n-1) characters are read, the newline character is read,
     or the end-of-file is reached, whichever comes first.*/
    {
        la = strtol(a, &pa, 10); // convert char input to int
        /*long int strtol (const char* str, char** endptr, int base);
        Parses the C-string str interpreting its content as an
         integral number of the specified base, which is
         returned as a long int value.*/
        if (pa == a || *pa != '\n') // if input is a whitespace or char, then we ask for correct input
        {
            printf("Please enter an integer: ");
        }
        else
            break;
    }
    printf("Your first number is: %ld\n", la); // print the first inpt value

    printf("Please input second number:\n"); // asking for second value

    while (fgets(b, sizeof(b), stdin)) // same procedure as for a[];
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

    // after the values have been stored the multiply() method is called;
    multiply(la, lb);
    
   

    printf("\n\nWould you like to start again?(Y/N): "); //

    // scanf("%c", &yesno);
    fgets(yesno, sizeof(yesno), stdin); // obtaining the user input
    if (*yesno == 'Y' || *yesno == 'y')
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
    user_input();
}
