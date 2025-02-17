 /*
 Write a program to calculate simple interest for a set of values representing principal, number of years and rate of interest.
*/
 
 #include <stdio.h>
 
 int main(){
    float Intrest;
    int p;
    float r, t;
    printf("Enter the Principle amount :");
    scanf("%d",&p);

    printf("Enter the Anaual intrest :");
    scanf(" %f",&r);

    printf("Enter the time the money is invested :");
    scanf("%f",&t);

    Intrest=(p*r*t)/100;
    
    printf("The value of simple interest of the amount %d is %f ", p , Intrest);
    return 0;
 }

 /*
  #include <stdio.h>
 
 int main(){
    float p = 34.1;
    int r = 8;
    int t = 5;
    printf("The value of simple interest is %f ", (p*r*t)/100);
    return 0;
 }
 */