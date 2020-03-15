# include <stdio.h>
#include <stdlib.h>
#include "libr.h"

   int input() 
{ 
    int number; 
    scanf("%d", &number); 
    return (number); 
} 
  
void output(float number) 
{ 
    printf("%f", number); 
} 

int main(void)
{
    float result;
   
    int choice, num; 
    
    do{
    printf("Press 1 to calculate area of circle\n"); 
    printf("Press 2 to calculate area of square\n"); 
    printf("Press 3 to calculate area of sphere\n"); 
    printf("Enter your choice:\n"); 
    choice = input(); 
    
    switch (choice) { 
    case 1: { 
        printf("Enter radius:\n"); 
        num = input(); 
        result = 3.14 * num * num; 
        printf("Area of sphere="); 
        output(result); 
        break; 
    } 
    case 2: { 
        printf("Enter side of square:\n"); 
        num = input(); 
        result = num * num; 
        printf("Area of square="); 
        output(result); 
        break; 
    } 
    case 3: { 
        printf("Enter radius:\n"); 
        num = input(); 
        result = 4 * (3.14 * num * num); 
        printf("Area of sphere="); 
        output(result); 
        break; 
    } 
    case 4:{
        
        BST_NR();
        break;
    }
    default: 
        printf("wrong Input\n"); 
        break;
    }
    }while(choice !=5 );
    printf("BYE!");
    return 0; 
 
    
    
    
    
    
    
    
    
    
    
    
    
        
//             int choice;
//         
//         do
//         {
//         printf("********** Main Menu **********\n(1).Calculator\n(2).Decimal to Binary convertor\n(3).Perfect number finder\n(4).Prime number or composite number\n(5).Factorial Calculator\n(6).To exit\n");
//         scanf("%d",choice);
// 
//         switch (choice)
//         {
//         case 1:
//                         system("cls");
//                         printf("********** Calculator **********\n\nEnter numbers:-\n");
//                         
//                         libr();
//                         printf("(0). Return to main menu");
//                         printf("\n");
//                     break;
// 
//                 case 2:
//                     system("cls");
// 
//                     printf("********** Decimal to Binary convertor **********\n\nEnter an integer in decimal number system:-");
//                 scanf("%d", &bininput);
// 
//                 printf("\n(0). Return to main menu\n");
//                 printf("\n");
//                 printf("\n");
//                 break;
// 
//             case 3:
//                 system("cls");
// 
//                 printf("********** Perfect number finder **********\n");
//                 printf("Enter a number:- ");
//             scanf("%d" ,&perfectinput);
//                 
//                 printf("(0). Return to main menu\n");
//                 break;
// 
//             case 4:
//                 system("cls");
// 
// 
//                 printf("********** Prime number or composite number **********\n");
//                 printf("Enter a number:- ");
//                 scanf("%d" ,&primeinput);
//                 
//                 printf("(0). Return to main menu\n");
//                 break;
// 
//             case 5:
//                 system("cls");
// 
//                 printf("********** Factorial Calculator **********\n");
//                 printf("Enter a number:- ");
//                 scanf("%d" ,&factinput);
//                 
//                 printf("(0). Return to main menu\n");
//                 break;
// 
//             case '6':
//                     system("cls");
//                     printf("Program terminated.\nPress any key to exit...");
//                     break;
//             default: printf("wrong input!...select a valid option!");
//             }
//         }while(choice != 6);
//         printf("bye");
//         
//         
        
}
