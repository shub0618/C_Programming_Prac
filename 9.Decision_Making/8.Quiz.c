/*
    Quick Quiz: Write a program to find grade of a student given his marks based on below:
        90 – 100 => A
        80 – 90 => B
        70 – 80 => C
        60 – 70 => D
        50 – 60 => E
        <50 => F
*/

#include <stdio.h>

int main(){ 
   char grade;
   int marks = 56;
   if(marks<=100 && marks>=90){
    grade = 'A';
    printf("the grade of student is %c", grade);
   }
   else if(marks<=90 && marks>=80){
    grade = 'B';
    printf("the grade of student is %c", grade);
   }
   else if(marks<=80 && marks>70){
    grade = 'C';
    printf("the grade of student is %c", grade);
   }
   else if(marks<=70 && marks>=60){
    grade = 'D';
    printf("the grade of student is %c", grade);
   }
   else if(marks<=60 && marks>=50){
    grade = 'E';
    printf("the grade of student is %c", grade);
   }
   else{
    grade = 'F';
    printf("the grade of student is %c", grade);
   }
    return 0;
}   