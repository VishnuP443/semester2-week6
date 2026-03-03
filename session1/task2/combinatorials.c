#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * @brief recursively calculates the factorial of an integer n.
 *
 * @param n number to find factorial of.
 * @return int n factorial.
 */
int factorial(int n)
{
  // the base case - this determines when the recursion should stop
  if (n == 0)
  {
    return 1;
  }

  return n * factorial(n - 1);
}

int main(int argc, char **argv)
{
  /*
  The program should accept a command line argument as follows:
  ./combinatorials n C r
  ./combinatorials n P r

  where n and r are both positive integers, and r is always less than or equal to n.

  for example:
  ./combinatorials 7 C 2

  Your program should then calculate and print out the correct result

  nCr should return the total combinations of r items out of n.
  This is calculated by: n! / (r! (n - r)!)

  nPr should return the total permutations of r items out of n.
  This is calculated by: n! / (n-r)!

  Add appropriate validation to your program to make your code robust.

  You should try and use functions to write your program.

  */
  printf("%d", argc);


}

int choice_handle(char choice, int n, int r)
{
  int n_factorial = factorial(n);
  int r_factorial = factorial(r);
  int nr_factorial = factorial(n - r);
  int combinations = n_factorial / (r_factorial * (nr_factorial));

  if (choice == 'C')
  {
    return combinations;
  }

  else
  {
    return (combinations * r_factorial);
  }
}