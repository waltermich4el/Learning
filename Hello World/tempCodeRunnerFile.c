#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

//As a user i would like to have an app that gives the product of two numbers.
void
multiply (char* a, char* b)
{
  int i = 0;

  if ((a[0] == '-') && (b[0] == '-'))
    i = 1;

  for (i; a[i] != 0 && b[i] != 0; i++)
    {

      if (!isdigit (a[i]))
	&&(!isdigit (b[i])) printf ("Wrong input");

      else
	{
	  int ia = a - '0';
	  int ib = b - '0';
	  printf ("The result is: %d\n", ia * ib);
	}			// we print the result]
    }

}

// // if((isdigit(a) == 1) && (isdigit(b) == 1)){
//         int ia = a - '0';
//         int ib = b - '0';
//       printf("The result is: %d\n",ia*ib);}// we print the result]
//     else



int
main ()
{
  char a[], b[];		// init variables 


  printf ("Hello!. Please input two int numbers:\n");	// We print the task 

  scanf (" %c", &a);		// we store the user input in the variables
  scanf (" %c", &b);

  multiply (a, b);

  return 0;


}