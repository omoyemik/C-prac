#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    1. Write a C program to print your name,
    date of birth, and mobile number.
    */
    printf("Number 1\n");
    printf("Name   : Omoyemi Kuteyi\n");
    printf("DOB    : June 23, 1997\n");
    printf("Mobile : +33663922892\n\n");
    /*
    2. Write a C program to get the
     C version you are using.
     */
     printf("Number 2\n");
    if (__STDC_VERSION__>=201710)
    printf("We are using C18!\n\n");
    /*
    3. Write a C program to print a block F
    using the hash (#), where the F has a
    height of six characters and width of
    five and four characters.
    And also print a very large 'C'.
    */
    printf("Number 3\n");
    printf("#####\n");
    printf("#\n");
    printf("#\n");
    printf("####\n");
    printf("#\n");
    printf("#\n");

    printf("   ######\n");
    printf(" ##      ##\n");
    printf("#\n");
    printf("#\n");
    printf("#\n");
    printf("#\n");
    printf("#\n");
    printf(" ##      ##\n");
    printf("   ######\n\n");

    /*
    4. Write a C program to print the following characters in reverse.
     Test Characters: 'X', 'M', 'L'
    */

    char char1 = 'X';
    char char2 = 'M';
    char char3 = 'L';
    printf("Number 4\n");
    printf("The reverse of %c%c%c is %c%c%c\n\n", char1, char2, char3, char3, char2, char1);

    /*
    5. Write a C program to compute the perimeter and area of a rectangle
    with a height of 7 inches and width of 5 inches.
    Expected Output:
    Perimeter of the rectangle = 24 inches
    Area of the rectangle = 35 square inches
    */

    int height = 7;
    int width = 5;
    int perimeter = height + height + width + width;
    int area = height * width;
    printf("Number 5\n");
    printf("Perimeter of the rectangle = %d inches\n", perimeter);
    printf("Area of the rectangle = %d inches\n\n", area);
    /*
    6. Write a C program to compute the perimeter and area of a circle with a given radius
    */

    double radius;
    printf("Number 6\n");
    printf("Enter a number for the radius = ");
    scanf("%lf", &radius); //scanf collects input from the user like input in python
    double circPer = 2 * 3.14 * radius;
    double circArea = 3.14 * radius * radius;
    printf("Perimeter of the circle = %lf\n", circPer);
    printf("Area of the circle = %lf\n\n", circArea);
    /*
    7. Write a C program to display multiple variables.
      Sample Variables :
      a+ c, x + c,dx + x, ((int) dx) + ax, a + x, s + b, ax + b, s + c, ax + c, ax + ux
      Declaration :
      int a = 125, b = 12345;
      long ax = 1234567890;
      short s = 4043;
      float x = 2.13459;
      double dx = 1.1415927;
      char c = 'W';
      unsigned long ux = 2541567890;
    */
    int a = 125, b = 12345;
      long ax = 1234567890;
      short s = 4043;
      float x = 2.13459;
      double dx = 1.1415927;
      char c = 'W';
      unsigned long ux = 2541567890;
      printf("Number 7\n");
      printf("a + c = %d\n", a + c);
      printf("x + c = %f\n", x + c);
      printf("dx + x = %lf\n", dx + x); // lf long float
      printf("((int)dx) + ax = %ld\n", ((int)dx) + ax);
      printf("a + x = %f\n", a + x);
      printf("s + b = %d\n",s + b);
      printf("ax + b = %ld\n",ax + b); //ld long int
      printf("s + c = %hd\n",s + c); //hd short int
      printf("ax + c = %ld\n",ax + c);
      printf("ax + ux = %lu\n\n",ax + ux); //lu long unsigned
    /*
    8. Write a C program to convert specified days into years, weeks and days.
      Note: Ignore leap year.
    */
    printf("Number 8\n");
    int number;
    printf("Enter Number of Days here = \n");
    scanf("%d",&number);
    int years = number / 365;
    int weeks = (number % 365)/7;
    int days = number - ((years * 365)+ (weeks * 7));
    printf("Years = %d\n", years);
    printf("Weeks = %d\n", weeks);
    printf("Days = %d\n\n", days);


    /**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
    return 0;

}
