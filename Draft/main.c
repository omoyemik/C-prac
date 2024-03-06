#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("        /|\n");
    printf("       / |\n");
    printf("      /  |\n");
    printf("     /   |\n");
    printf("    /    |\n");
    printf("   /     |\n");
    printf("  /      |\n");
    printf(" /       |\n");
    printf("/________|\n");

    char characterName[] = "George";
    int characterAge = 35;
    //using variables
    printf("There was once a man named %s\n", characterName);
    printf("he was %d years old.\n", characterAge);
    characterAge = 15;
    printf("He really liked the name %s\n", characterName);
    printf("but he did not like being %d.\n", characterAge);
    //Datatypes
    //int age = 40;
    //double gpa = 3.7;
    //char grade = 'A';
    //char phrase[] = "Giraffe Academy"; //Array, strings stored in arrays
    printf("Hello World\n"); //is a function, it performs a specific task i.e displaying output on the screen
    printf("My favorite %s is %d and %f\n","number", 500, 500.987540); //when printing out numbers, you use a format specifier first to indicate the type of output you want to display.
    //%d specifies whole numbers while %f specifies floating point numbers, %c specifies a single character %lf specifies double
    int favNum = 90;
    printf("My favorite %s is %d\n", "number", favNum);
    //math operations; if two integers are used in a math operation and the format specifier is %f, it'll return 0
    printf("%d\n", 5 + 4);
      int num = 6;
      printf("%d\n", num); // or store in variables

      //functions with math
      printf("%f\n", pow(2, 3)); //pow is a function that raises the first number to the power of the second number and it only works with %f
      printf("%f\n", sqrt(36));  //sqrt finds the square root
      printf("%f\n", ceil(36.356)); //rounds a number up to the next whole number
      printf("%f\n", floor(36.356)); //rounds a number down to the next whole number
      //Addition
      int num1 = 10;
      int num2 = 5;
      int sum = num1 + num2;
      int difference = num1 - num2;
      int product = num1 * num2;
      int quotient = num1 / num2;
      printf("Addition: %d + %d = %d\n", num1, num2, sum);
      printf("Subtraction: %d - %d = %d\n", num1, num2, difference);
      printf("Multiplication: %d * %d = %d\n", num1, num2, product);
      printf("Division: %d / %d = %d\n", num1, num2, quotient);
    return 0;
}
