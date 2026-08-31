// Q-1  Write a program that accepts a user's name and age as input and then prints a greeting message in the following format: "Hello Shery you are 12 years old."

// #include<stdio.h>
// int main(){
//     int age;
//     char name[50];
//     printf("Enter your name : ");
//     scanf("%s",&name);
//     printf("Enter your age : ");
//     scanf("%d",&age);
//     printf("hello \"%s\" you are %d years old",name,age);
//     return 0;
// }

// Q-2 Write a program that prints the sum of two numbers, that accepts number from user.

// #include <stdio.h>
// int main()
// {
//     int a,b,sum;
//     printf("enter first number : ");
//     scanf("%d", &a);
//     printf("enter second number : ");
//     scanf("%d", &b);
//     sum = a + b;
//     printf("the sum of %d & %d is %d",a,b,sum);
//     return 0;
// }

// Q-3 Write a program that accepts two integers as input and swaps their values. After swapping, print the new values of the two numbers.

// #include <stdio.h>
// int main()
// {
//     int a, b, temp;
//     printf("enter first number : ");
//     scanf("%d",&a);
//     printf("enter second number : ");
//     scanf("%d",&b);
//     printf("the value of a before swapping is %d \n",a );
//     printf("the value of b before swapping is %d \n",b );
//     temp = a;
//     a = b;
//     b = temp;
//     printf("the value of a after swapping is %d \n",a );
//     printf("the value of b after swapping is %d \n",b );
// }

// Q-4 Accept the length and width of a rectangle, your task is to write a program that calculates and prints the area and perimeter of the rectangle. The area of a rectangle is calculated as length * width, and the perimeter is calculated as 2* (length + width).

// #include <stdio.h>
// int main()
// {
//     float length, width, area, perimeter;
//     printf("enter length of rectangle : ");
//     scanf("%f", &length);
//     printf("enter width of rectangle : ");
//     scanf("%f", &width);
//     area = length * width;
//     perimeter = 2 * (length + width);
//     printf("the area of the rectangle is %.2f \n", area);
//     printf("the perimeter of the rectangle is %.2f \n", perimeter);
// }

// Q-5 Write a program that accepts two integers as input and performs basic arithmetic operations (addition, subtraction, multiplication, and division). The program should display the results along with a custom message for each operation.

// #include <stdio.h>
// int main()
// {
//     int a, b, Add, Sub, Mul, Div;
//     printf("enter the value of a : ");
//     scanf("%d", &a);
//     printf("enter the value of b : ");
//     scanf("%d", &b);
//     Add = a + b;
//     Sub = a - b;
//     Mul = a * b;
//     Div = a / b;
//     printf("addition of a and b is : %d \n", Add);
//     printf("subtraction of a and b is : %d \n", Sub);
//     printf("multiplication of a and b is : %d \n", Mul);
//     printf("division of a and b is : %d \n", Div);
// }

// Q-6 Write a program that accepts a user's name as input and prints a personalized greeting message in the format: hello < name> !! , How you doing?

// #include <stdio.h>
// void main()
// {
//     char name[50];
//     printf("enter your name : ");
//     scanf("%s",&name);
//     printf("hello %s !! , How you doing ?",name);
//     return 0;
// }

// Q-7 Write a program that takes the radius of a circle as input and calculates: 1. The Area of the circle using the formula: Area = pi*r^22. The Circumference (Perimeter) of the circle using the formula: Circumference = 2*pi*r Use TT = 3.1416 for calculations. The result should be printed with two decimal places.

// #include <stdio.h>
// void main()
// {
//     float r, Area, Circumference, pi = 3.1416;
//     printf("enter radius of the circle : ");
//     scanf("%f", &r);
//     Area = pi * (r * r);
//     Circumference = 2 * pi * r;
//     printf("area of the rectangle is %2.f \n", Area);
//     printf("Circumference of the rectangle is %2.f \n", Circumference);
// }

// Q-8 Write a program that takes the base and height of a triangle as input and calculates the area using the formula: Area = 1/2*Base*Height The result should be printed with two decimal places.

// #include<stdio.h>
// void main()
// {
//     float base,height,Area;
//     printf("enter the base of triangle : ");
//     scanf("%f",&base);
//     printf("enter the height of triangle : ");
//     scanf("%f",&height);
//     Area = 0.5*base*height;
//     printf("the area of the triangle is %.2f",Area);
// }

// Q-9 Write a program that takes two integers, A and B, as input and calculates the result of A^B (A raised to the power B). You should compute the power without using any inbuilt functions like pow().

// #include <stdio.h>
// void main()
// {
//     int A, B, result = 1,i;
//     printf("enter value A : ");
//     scanf("%d", &A);
//     printf("enter value B : ");
//     scanf("%d", &B);
//     for (i = 1; i <= B;i++){
//       result = result * A;
//     }
//     printf("%d raised to the power %d is : %d",A,B,result);
//     return 0;
// }


// Q-10 Write a program that calculates Compound Interest (CI) using the formula:                 CI = P*(1+ R/100)^T- P where:  P = Principal amount , R = Annual interest rate (in percentage) , T = Time in years Note Do not use pow() function

#include<stdio.h>
void main()
{
    float P,R,CI,Amount;
    int T,i;
    printf("enter the Principal amount : ");
    scanf("%f",&P);
    printf("enter the Annual interest rate : ");
    scanf("%f",&R);
    printf("enter the Time in years : ");
    scanf("%d",&T);
    Amount = 1;
    for(i =1 ;i<= T;i++){
        Amount = Amount * (1+ R/100);
    }
    CI = P * Amount - P;
    printf("Compound Interest is %.2f",CI);
}