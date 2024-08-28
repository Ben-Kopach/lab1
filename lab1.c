//****************************************
//
// Instructions: You will write a simple program that asks the user for their age, height, and grade, and then displays the entered values back to the user.
//
// lab1.c
// Author: Benjamin Kopach
// Date: 8/28/24
// Class: Cop 3223, Professor Para
// Purpose: The purpose of this assignment is to make sure we are familiar with using "scanf", "printf", how to format inputs and outputs as well as writing out own first complete C code program.
//****************************************

#include <stdio.h>

int main () {

int age;
int height;
int grade;
  
  
  printf("What is your age? ");
  scanf("%d", &age);
  printf("What is your height? ");
  scanf("%d", &height);
  printf("What is your grade? ", grade);
  scanf("%d", &grade);


printf("Is this information correct?\n");
printf("Your are %d years old\n", age);
printf("Your are %d\n", height);
printf("Your are in %d grade\n", grade);

return 0;

}