
/******************************************************************************
* Name: Gabriela Roznawska                                                    *
* Assignment name: Homework 1 - "Greatest Common Denominator"                 *
*                                                                             *
* Assignment for: February 17th 2023                                          *
******************************************************************************/

/****************************************************************************** * Academic honesty certification:                                             * *                                                                             *
* My signature below confirms that the above list of sources is complete      *
* and I have not talked to anyone else (e.g., CSC161 students) about          *
* the solution to this problem.                                               *
*                                                                             *
* Gabriela Roznawska                                                          *
******************************************************************************/

/* The Greatest Common Denominator: gcd.c */
/* The program gcd.c generates the greatest common denominator of the two 
   imput numbers provided by the user. If two numbers 0 are the imput the 
   result is undefined */

#include <stdio.h>


int main (void)
{
  int n1 = 0; // declaration, it will be the first user input number
  int n2 = 0; // deceration, it will be the second user input number
  int m; // declaration, it will take the value of either n1 or n2
  int n; // declaration, it will take the value of either n1 or n2
  int rem; // declaration, it will compute remainder of m % n

  printf ("Input two integers to compute their greatest common denominator?\n");
  // prints prompt to user to input two integers
  scanf ("%d %d", &n1, &n2); // scans the two user inputs

  m = n1; //m takes the value of n1
  n = n2; //n takes the value of n2
  
  if ((n1 == 0) || ( 0 == n2)){
    printf ("Error. Input integers not equal to zero\n");
    return 0;}
  // if either one of the inputs is zero the program prints an error
     
  else if (n1 > n2)
    ((m = n1) && (n = n2)); //if the n1 is bigger m takes its value
  else
    ((m = n2) && (n = n1)); //if the n2 is bigger m takes its value
      
  while (n != 0){ //continues calculating GCD until n=0
   rem =  m % n;
   m = n;
   n = rem;
  }
   printf ("The greatest common denominator of your two numbers is: %d\n", m);
     
return 0;

}
  
  
  
    
