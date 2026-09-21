// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//   char name[50];
//   int age;
//   printf("enter the name : ");
//   scanf("%49s", &name);
//   printf("enter the age : ");
//   scanf("%d", &age);
//   if (age >= 18)
//     printf("hello %s, you are eligible for vote", name);
//   else
//     printf("hello %s,you are eligible for vote in %d years", name, 18 - age);
//   return 0;
// }

// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//   int a, b, c;
//   printf("enter a : ");
//   scanf("%d", &a);
//   printf("enter b: ");
//   scanf("%d", &b);
//   printf("enter c: ");
//   scanf("%d", &c);
//   if (a > b && a > c)
//     printf("%d is the largest value", a);
//   else if (b > a && b > c)
//     printf("%d is the largest value", b);
//   else
//     printf("%d is the largest value", c);
//   return 0;
// }

// #include <stdio.h>
// #include <conio.h>
// #include <ctype.h>
// int main()
// {
//   char ch;
//   printf("enter ch : ");
//   scanf("%c", &ch);
//   ch = tolower(ch);
//   if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//     printf("%c is vowel", ch);
//   else
//     printf("%c is a consonant", ch);

//   return 0;
// }

// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//   int year;
//   printf("enter the year : ");
//   scanf("%d", &year);
//   if (year % 400 == 0)
//     printf("%d is a leap year", year);
//   else if (year % 4 == 0)
//     printf("%d is a leap year", year);
//   else if (year % 100 == 0)
//     printf("%d is not a leap year", year);
//   else
//     printf("%d is not a leap year", year);
//   return 0;
// }

// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//   int s1, s2, s3, s4, percentage, marks;
//   printf("enter the marks of subject 1 : ");
//   scanf("%d", &s1);
//   printf("enter the marks of subject 2 : ");
//   scanf("%d", &s2);
//   printf("enter the marks of subject 3 : ");
//   scanf("%d", &s3);
//   printf("enter the marks of subject 4 : ");
//   scanf("%d", &s4);
//   marks = s1 + s2 + s3 + s4;
//   percentage = marks*100 / 400 ;
//   printf("percentage is %d", percentage);
//   if (percentage >= 90)
//     printf("Grade A");
//   else if (percentage >= 80)
//     printf("Grade B");
//   else if (percentage >= 70)
//     printf("Grade C");
//   else if (percentage >= 60)
//     printf("Grade D");
//   else if (percentage >= 45)
//     printf("Grade E");
//   else if (percentage >= 35)
//     printf("Grade F");
//   else
//     printf("fail");
//   return 0;
// }

// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//   float rating;
//   printf("give your rating : ");
//   scanf("%f", &rating);
//   printf("movie rating is %f", rating);
//   if (rating >= 4.5 && rating <= 5.0)
//     printf("super hit");
//   else if (rating >= 3.5 && rating <= 4.5)
//     printf("hit");
//   else if (rating >= 2.1 && rating <= 3.4)
//     printf("\nsemi hit");
//   else
//     printf("flop");
//   return 0;
// }



// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//   float amount, final_amount;
//   printf("enter total amount : ");
//   scanf("%f", &amount);
//   printf("total amount : %.2f", amount);
//   if (amount >= 9001)
//     final_amount = amount - (amount * 0.2);
//   else if (amount >= 7001 && amount <= 9000)
//     final_amount = amount - (amount * 0.1);
//   else if (amount >= 5001 && amount <= 7000)
//     final_amount = amount - (amount * 0.05);
//   else
//     final_amount = amount;
//   printf("\nfinal amount : %f ", final_amount);
//   return 0;
// }
