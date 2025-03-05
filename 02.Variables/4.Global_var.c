#include <stdio.h>
 
// Declaring a global variable
int s;
 
int main () {
  
  // Declaring three local variables
  int p, q, r;
 
  /* Initializing the variables
     p, q, r are local variables
     s is a global variable */
  p = 2;
  q = 5;
  r = 7;
  s = p * q * r;
 
  // Display the variables
  printf ("p = %d",p);
  printf ("\nq = %d",q);
  printf ("\nr = %d",r);
  printf ("\ns (Multiplication Result) = %d",s);
 
  return 0;
}
 