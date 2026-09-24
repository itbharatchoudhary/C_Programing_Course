// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int i, j, n;
//     printf("Enter number of rows: ");
//     scanf("%d", &n);
//     for(i = 1; i <= n; i++)
//     {
//         // Print spaces
//         for(j = 1; j <= n - i; j++)
//         {
//             printf(" ");
//         }
//         // Print 1 and 0
//         for(j = 1; j <= 2 * i - 1; j++)
//         {
//             if(j % 2 == 1)
//                 printf("1");
//             else
//                 printf("0");
//         }
//         printf("\n");
//     }
//     getch();
//     return 0;
// }

// #include <stdio.h>
// #include <windows.h>
// int main()
// {
//     int i, n, j;
//     printf("Enter n: ");
//     scanf("%d", &n);
//     for(i = 1; i <= n; i++)
//     {
//         for(j = 1; j <= 2 * i - 1; j++)
//         {
//             if(j % 2 == 1)
//             {
//                 printf("Aishwarya College");
//                 Sleep(1000);
//                 system("cls");
//             }
//             else
//             {
//                 printf("Pali");
//                 Sleep(1000);
//                 system("cls");
//             }
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <windows.h>
// int main()
// {
//     int n, i, fact = 1;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
//     printf("Factorial Series:\n");
//     for(i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//         printf("%d! = %d\n", i, fact);
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int n, i, first = 0, second = 1, next;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
//     printf("Fibonacci Series:\n");
//     for(i = 1; i <= n; i++)
//     {
//         printf("%d\n", first);
//         next = first + second;
//         first = second;
//         second = next;
//     }
//    return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, j, n, num;
//     printf("Enter number of rows: ");
//     scanf("%d", &n);
//     for(i = 1; i <= n; i++)
//     {
//         // Print spaces
//         for(j = 1; j <= n - i; j++)
//         {
//             printf(" ");
//         }
//         num = 1;
//         // Print numbers
//         for(j = 1; j <= i; j++)
//         {
//             printf("%d ", num);
//             num = num * (i - j) / j;
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, first = 2, second = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series:\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", first);
        next = first + second;
        first = second;
        second = next;
    }
    return 0;
}