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